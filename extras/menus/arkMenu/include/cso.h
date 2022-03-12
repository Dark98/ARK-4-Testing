
#ifndef CSO_H

#define CSO_H


#include <stdio.h>

#include <stdlib.h>

#include <zlib.h>

#include <pspdebug.h>

#include <string.h>

#include "iso.h"

#define CSO_MAGIC 0x4F534943 // CISO
#define ZSO_MAGIC 0x4F53495A // ZISO
#define DAX_MAGIC 0x00584144 // DAX
#define JSO_MAGIC 0x4F53494A // JISO

#define DAX_BLOCK_SIZE 0x2000
#define DAX_COMP_BUF 0x2400

typedef struct 
{
    unsigned magic;
    unsigned header_size;
    unsigned long long file_size;
    unsigned block_size;
    unsigned char version;
    unsigned char align;
    char reserved[2];
} CSOHeader;

typedef struct{ 
    uint32_t magic;
    uint32_t uncompressed_size;
    uint32_t version; 
    uint32_t nc_areas; 
    uint32_t unused[4]; 
} DAXHeader;

typedef struct _JisoHeader {
    uint32_t magic; // [0x000] 'JISO'
    uint8_t unk_x001; // [0x004] 0x03?
    uint8_t unk_x002; // [0x005] 0x01?
    uint16_t block_size; // [0x006] Block size, usually 2048.
    // TODO: Are block_headers and method 8-bit or 16-bit?
    uint8_t block_headers; // [0x008] Block headers. (1 if present; 0 if not.)
    uint8_t unk_x009; // [0x009]
    uint8_t method; // [0x00A] Method. (See JisoAlgorithm_e.)
    uint8_t unk_x00b; // [0x00B]
    uint32_t uncompressed_size; // [0x00C] Uncompressed data size.
    uint8_t md5sum[16]; // [0x010] MD5 hash of the original image.
    uint32_t header_size; // [0x020] Header size? (0x30)
    uint8_t unknown[12]; // [0x024]
} JisoHeader;

typedef enum {
	JISO_METHOD_LZO		= 0,
	JISO_METHOD_ZLIB	= 1,
} JisoMethod;

enum {
    TYPE_CSO,
    TYPE_ZSO,
    TYPE_DAX,
    TYPE_JSO,
};

class Cso : public Entry{


    private:

        int ciso_type;

        void clear();

    protected:
    
        bool isPatched();
        void doExecute();


    public:

        Cso(string path);

        ~Cso();

        

        void loadIcon();

        void getTempData1();

        void getTempData2();

        

        char* getType();

        char* getSubtype();

        

        static bool isPatched(string path);

        static bool isCSO(const char* filepath);

        void* fastExtract(const char* path, char* file, unsigned* size=NULL);

};


#endif

