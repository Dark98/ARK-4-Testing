#include "vitamem.h"

void unlockVitaMemory(){

    int apitype = sceKernelInitApitype(); // prevent in pops and vsh(?)
    if (apitype == 0x144 || apitype == 0x155 || apitype == 0x200 || apitype ==  0x210 || apitype ==  0x220 || apitype == 0x300)
        return;

    // apply partition info
    SysMemPartition *(* GetPartition)(int partition) = NULL;
    SysMemPartition *partition;

    u32 i;
    for (i = 0; i < 0x4000; i += 4) {
        u32 addr = 0x88000000 + i;
        if (_lw(addr) == 0x2C85000D) {
            GetPartition = (void *)(addr - 4);
            break;
        }
    }

    if (!GetPartition){
        return;
    }


    u32 kernel_size = (4 * 1024 * 1024); // p11 size
    u32 user_size = USER_SIZE + VITA_EXTRA_RAM_SIZE - kernel_size; // new p2 size

    // modify p2
    partition = GetPartition(PSP_MEMORY_PARTITION_USER);
    partition->size = user_size;
    partition->data->size = (((user_size >> 8) << 9) | 0xFC);

    // modify p11
    partition = GetPartition(11);
    partition->size = kernel_size;
    partition->address = 0x88800000 + user_size;
    partition->data->size = (((kernel_size >> 8) << 9) | 0xFC);

    sctrlHENSetMemory(52, 4);
}
