#!/bin/bash




    export LLVM=1
    export LLVM_IAS=1
    export PLATFORM_VERSION=13
    export ANDROID_MAJOR_VERSION=t
    export ARCH=arm64
    export LTO=full
    export LD=ld.lld
    
    
    git submodule update --init root/rKSU
    git submodule update --init root/susfs
    git submodule update --init toolchain/clang-r416183b
    ln -sf "$ROOT/root/rKSU/kernel" "$ROOT/drivers/kernelsu"


    
    make clean && make mrproper
    make -j64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y ARCH=arm64 exlinux_defconfig 
    make -j64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y ARCH=arm64 
