Installation On PSP

- Move or copy `ARK_01234` folder into `/PSP/SAVEDATA/` folder.
- Move or copy `ARK_Live` folder into `/PSP/GAME/` folder.
- Launch `ARK Loader`. It will install ARK modules on PSP Flash and boot the CFW.


  Non permanent CFW installation:

    - Delete `FLASH0.ARK` from `/PSP/SAVEDATA/ARK_01234` to prevent flashing files every time you reload the CFW.
    - Run `ARK Loader` every time you power off or hard reboot the device to re-enable `ARK`.


  Permanent CFW via cIPL

    - Only works on 1K models and early 2K models (those compatible with Pandora).
    - Use `pspident` homebrew to identify your model and compatibility with custom IPL.
    - Move or copy `ARK cIPL` folder to `/PSP/GAME/` and run the program.
    - Press the corresponding button in the installation page to install or remove the cIPL patch.


  Permanent CFW via Infinity

    - Works on all PSP models on 6.60 or 6.61 firmwares.
    - Copy or move the `EBOOT.PBP` (or `EBOOT_GO.PBP` renamed to `EBOOT.PBP` if using a PSP Go) from the `Infinity` folder found in the ARK download into `/PSP/GAME/UPDATE`.
    - Run the`Infinity` app using Official Firmware to run the initial installation.
    - Run `Infinity` a second time to configure autoboot by selecting ARK within the Infinity app. Run the ARK CFW again to activate. ARK will now be automatically activated on boot up.


  Time Machine and Despertar del Cementerio

    - `Time Machine` allows to boot the `6.61` firmware and `ARK` entirely from the Memory Stick.
    - `Despertar del Cementerio` allows to revive a bricked PSP when used in combination with a `Pandora` or `Baryon Sweeper`.
    - To install `DC-ARK` you must first format the memory stick with at least 2048 bytes for the first (boot) sector (there are various guides on how to format a memory stick to prepare for DC).
    - You also need to be running a `CFW` to install `DC-ARK` (ARK itself or any other).
    - Copy the `ARK_DC` folder to the `/PSP/GAME/` folder and run the installer from the `XMB`.
    - Follow the instructions to install DC-ARK and create a magic memory stick.
    - On compatible models, use `Advanced VSH Menu` to create a `Pandora` battery.
    - Use a `Pandora` or `Baryon Sweeper` in combination with your newly created `Magic Memory Stick` to boot up `Despertar del Cementerio`.
    - From here you can either boot ARK from memory stick, install 6.61 Firmware with ARK on the Nand or install 6.61 Official Firmware.
    - Note that installing 6.61 firmware with ARK requires a cIPL-compatible PSP (1K and early 2K).


Installation On PS Vita


  Standalone

    - Works on Official Firmware 3.60 up to 3.74, doesn't require Henkaku/h-encore or any native hack.
    - Download a legit `PSP` game from `PSN`, the free demo of `Ape Quest` or `LocoRoco Midnight Carnival` is recommended. `Minis` are `NOT` recommended.
    - For Henkaku/h-encore users, install an ARK bubble using [ArkFast](https://disk.yandex.ru/d/XMJpxf7RD79VLw) (manually updated, create an issue if it's outdated).
    - Official Firmware users (no henkaku/h-encore) can install the PBOOT bubble manually: https://github.com/TheOfficialFloW/Trinity#preparation
    - Replace the ARK savedata folder (`ux0:pspemu/PSP/SAVEDATA/ARK_01234`) with the folder from latest release.
    - Copy `K.BIN` from `Vita/Standalone` folder into `ARK_01234` savedata folder.
    - To use right analog stick (i.e. gta_remastered plugin): https://github.com/rereprep/ArkRightAnalog
    - To `exit` from a game or homebrew back to the `custom launcher`, press `L+R+Down+Start`. Works on `PSP` too.
    - Some features are not available to Vita users, mainly the official Sony `XMB` and `PS1` games.
    - The kernel exploit is known to have stability issues, if it fails or crashes, simply restart your Vita and try again.
    - If you are running an old firmware (<3.60), you will need a spcialized `K.BIN`, either build one yourself or open an `Feature Request`.


  Adrenaline

    - Works on Firmware 3.60 up to 3.74, requires Henkaku/h-encore and `Adrenaline` (https://github.com/TheOfficialFloW/Adrenaline).
    - Install `ARK_01234` folder into `/PSP/SAVEDATA/` folder.
    - Install `ARK_Live` folder into `/PSP/GAME/` folder.
    - Copy `K.BIN` from `Vita/Adrenaline` folder into `ARK_Live` game folder.
    - Open `Adrenaline`, (optionally) create a `savestate` to easily go back.
    - Launch `ARK Loader` from within `Adrenaline` and wait for it to load.
    - (Optionally) Create a `savestate` using `Adrenaline`'s built-in menu to easily load ARK.
    - (Optionally) Use `savestates` to easily and quickly switch between `Adrenaline` and `ARK`.
    - You can use `Adrenaline Bubbles Manager` to create an autoboot bubble for `ARK Loader`, allowing you to easily and directly boot into `Adrenaline-ARK`.
    - Note: this does not permanently modify `Adrenaline` in any way.


Updating ARK

  There are three ways to update ARK:

    - Use the `System Update` feature in the XMB. Requires your PSP/Vita to be connected to the internet.
    - Copy the `UPDATE` folder to `/PSP/GAME/` and run it.
    - Copy `ARK_01234` folder and (on PSP) run `ARK Loader` again to install new flash0 files.