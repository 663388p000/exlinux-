#!/bin/bash


git submodule update --init root/rKSU
git submodule update --init root/susfs
git submodule update --init toolchain/clang-r416183b

export LLVM=1
export LLVM_IAS=1
export PLATFORM_VERSION=13
export ANDROID_MAJOR_VERSION=t
export ARCH=arm64
export LTO=full
export LD=ld.lld
    
    
ln -sf "$PWD/root/rKSU/kernel" "$PWD/drivers/kernelsu"
    

make -j64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y ARCH=arm64 exlinux_defconfig 
make -j64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y ARCH=arm64 AS=/toolchain/clang-r416183b/bin/llvm-as
