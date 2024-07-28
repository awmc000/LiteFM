# Lite FM

Lightweight and Fast as FUCK file manager written in C with ncurses library

## Features

1. Ranger like traversal of directories (vim keybinds supported)
2. String search along with next occurance functionalities
3. Easy and Fast addition, deletion of files and directories
4. Clean and responsive TUI thanks to ncurses with cool colors and unicodes
5. Incredibly fast extraction and compression functions thanks to `libarchive`

![litefm1](https://github.com/user-attachments/assets/7f63e03e-7e17-41b5-b805-f7ddcd5dd095)
![litefm2](https://github.com/user-attachments/assets/b361d1b6-fa12-48ad-82af-b48dfc80d44b)

## Usage

-> Currently LiteFM has only been tested on the following Linux Distros:
   1. Arch Linux 6.9.9 and 6.10.0 kernels (zen and base) x86_64 arch (1920x1080)
   2. Ubuntu 22 x86_64

-> There are no plans on expanding this beyond Linux distributions

## Building

LiteFM cannot be installed in any UNIX-like distribution but can be easily built!

> [!NOTE]
> 
> Dependencies to install for LiteFM:
> 
> CMake / Make
> 
> Ncurses library (libncurses-dev for debian)
> 
> libarchive (for extraction and compression)
> 
> A C compiler (like GCC)
> 

Building with CMake:

**Ensure you have CMake installed first**

-> `cmake -S -B build/` to create a `build/` directory with all libraries linked as per `CMakeLists.txt`

-> `cmake --build build/` to get the `./build/litefm` executable

-> Set it as an alias in your respective shell rc and enjoy!

> [!IMPORTANT]
> Ensure that you set up litefm.log in your ~/.cache/litefm/log/ directory (create if not there)
> 
> LiteFM has a very modular logging system and keeps a track of every file/dir control that goes on in a litefm instance 
> 
> Just run the command mkdir -p $HOME/.cache/litefm/log/ and you can run litefm without a hassle!

Building with Make:

-> Run `make` in the current directory

-> This should give a `litefm` executable, just run it to enjoy LiteFM!

-> To cleanup, run `make clean`

> [!NOTE]
> Building LiteFM with build.sh (**HIGHLY RECOMMENDED**) 
> 
> The script contains every method of installation, logging and setup of litefm
> 
> Just run `chmod +x build.sh` 
> 
> Execute it by `./build.sh` 
> 
> Just wait for it to setup and answer a few questions, thats it!

## SECURITY

As this is a file manager that is able to perform some VERY cool and dangerous tasks like deleting any directory recursively, I definitely have tried to set up security measures to avoid any form of code vulnerability or CWE.

Other steps I plan on taking to ensure that you are always in control of the file manager are:

1. A `litefm.log` and it's functionality has been implemented (`src/logging.c`) that will log EVERY file/dir control in every litefm instance
2. Possibly set up a trash system so that accidental deletion of any file/dir can be restored [priority/low]

Check out `SECURITY.md` for the security policy that this repository follows.

## FUTURE

This file manager is far from done there are a lot of cool and essential features that are planned:

- [x] Adding a basic file preview for readable files (and stat info for directories)

- [ ] Simple tasks like selecting multiple files, moving fils/dirs to a location (cut, copy , paste)

- [ ] GO-TO a particular file or directory through string input (might be tough)

- [x] Color coding for file groups (green - general files, pink - images, red - unextracted archives, orange - audio files) [implementation through struct mostly]

- [ ] Bugfixes and massive code refactor

- [x] Improve the build script

- [ ] Integration of adding a text editor
