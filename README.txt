WRKRazzle - Windows Research Kernel for Razzle

 Repackaged by Stephanos Ioannidis @ OpenNT Project
 
 Maintainer:    Stephanos Ioannidis
 Email:         root@stephanos.io
 Website:       http://stephanos.io/


WRKRazzle REAMDE begins at the line 83.

===============================================================================

Copyright (c) Microsoft Corporation. All rights reserved. 

You may only use this code if you agree to the terms of
the Windows Research Kernel Source Code License agreement
(see License.txt).  If you do not agree to the terms, do not use the code.

***

WRK v1.2

The Windows Research Kernel v1.2 contains the sources for the core of
the Windows (NTOS) kernel and a build environment for a kernel that will run on
    x86     (Windows Server 2003 Service Pack 1) and
    amd64   (Windows XP x64 Professional)
A future version may also support booting WRK kernels on Windows XP x86 systems,
but the current kernels will fail to boot due to differences in some shared 
structures.

The NTOS kernel implements the basic OS functions
for processes, threads, virtual memory and cache managers, I/O management,
the registry, executive functions such as the kernel heap and synchronization,
the object manager, the local procedure call mechanism, the security reference
monitor, low-level CPU management (thread scheduling, Asynchronous and Deferred
Procedure calls, interrupt/trap handling, exceptions), etc.

The NT Hardware Abstraction Layer, file systems, network stacks, and device
drivers are implemented separately from NTOS and loaded into kernel mode
as dynamic libraries.  Sources for these dynamic components are not included
in the WRK, but some are available in various development kits published
by Microsoft, such as the Installable File System (IFS) Kit and the
Windows Driver Development Kit (DDK).

WRK v1.2 includes most of the NTOS kernel sources from the latest released
version of Windows, which supports the AMD64 architecture on the Desktop.
The kernel sources excluded from the kit are primarily in the areas of
plug-and-play, power management, the device verifier, kernel debugger
interface, and virtual dos machine.  The primary modifications to WRK
from the released kernel are related to cleanup and removal of server
support, such as code related to the Intel IA64.

***

Organization of the WRK sources

The file License.txt contains the license covering use of the WRK.

The public\ directory contains a number of include files shared among system
components.  base\ntos\ contains the NTOS sources.

The primary NTOS source components included in the WRK are organized as follows:

    cache\  - cache manager
    config\ - registry implementation
    dbgk\   - user-mode debugger support
    ex\     - executive functions (kernel heap, synchronization, time)
    fsrtl\  - file system run-time support
    io\     - I/O manager
    ke\     - scheduler, CPU management, low-level synchronization
    lpc\    - local procedure call implementation
    mm\     - virtual memory manager
    ob\     - kernel object manager
    ps\     - process/thread support
    se\     - security functions
    wmi\    - Windows Management Instrumentation

    inc\    - NTOS-only include files
    rtl\    - kernel run-time support
    init\   - kernel startup

***

Summary

The WRKRazzle is a repackaged version of the Windows Research Kernel v1.2 that
is compatible with the NTOSBE Razzle environment.

As compared to the standard Windows Research Kernel distribution, WRKRazzle
offers the following advantages:

1. Multiprocessor build is supported through the magic of the Razzle Build
   Utility (build.exe).
2. Kernel (base\ntos\ke) service table is automatically generated from
   service.tab.
3. Runtime (base\ntos\rtl) error.h is automatically generated from generr.c.
4. The build infrastructure is much cleaner than the hack-job makefile build
   environment provided with the WRK.
5. Razzle is what Microsoft internally uses.

***

Setting up the Build Environment

WRKRazzle is intended to be built with the NTOSBE. NTOSBE is the Razzle build
environment developed and used by the OpenNT Project. Its main use is for
building the NT 4.5, but it may also be used for building the WRKRazzle.

1. Check out the NTOSBE repository. The local NTOSBE directory may be located
anywhere, but it is recommended that you place this directory under the drive
root (e.g. W:\ntosbe) for the sake of simplicity.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    svn co svn://svn.stephanos.io/ntosbe/trunk W:\ntosbe
-------------------------------------------------------------------------------

2. Check out the WRKRazzle repository. This repository may also be located
anywhere on your local drive, but it is recommended that you place it under the
drive root.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    svn co svn://svn.stephanos.io/wrkrazzle/trunk W:\wrkrazzle
-------------------------------------------------------------------------------

3. While the WRKRazzle repository is being checked out, go to the NTOSBE
directory and open siz_templ.cmd in your favourite text editor. You will see
something like the following:

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@echo off

REM //
REM // SIZ_NTROOT: Path to the NT 4.5 source root (e.g. W:\trunk.x86chk)
REM //

set SIZ_NTROOT=W:\trunk.x86chk

REM //
REM // SIZ_NTTREE: Path to the NT 4.5 binary root (e.g. W:\bin)
REM //

set SIZ_NTTREE=W:\bin

REM //
REM // SIZ_NTARCH: Target build architecture [x86, amd64, arm, mips, alpha, ppc]
REM //

set SIZ_NTARCH=x86

REM //
REM // SIZ_NTBLD: Target build type [fre, chk]
REM //

set SIZ_NTBLD=chk

REM //
REM // Repository-specific Parameters
REM //

REM //
REM // _NT_TARGET_VERSION: If the target repository version is not 4.5, set the following value.
REM //                     For building WRKRazzle, this value must be set to 0x0502 (5.2).
REM //

REM set _NT_TARGET_VERSION=0x0502

REM //
REM // Call sizzle
REM //

call sizzle.cmd
-------------------------------------------------------------------------------

4. Set SIZ_NTROOT to the WRKRazzle directory (in our demo, W:\wrkrazzle) and
SIZ_NTTREE to the binary output path you want (e.g. W:\wrkrazzle.bin). When
successfully built, the ntkrnlmp.exe will be 'binplace'd under
SIZ_NTTREE\(TARGETNAME), where (TARGETNAME) would be something like x86fre
or amd64fre.

5. Set SIZ_NTARCH to your desired target architecture. For WRK, x86 and amd64
target architectures are supported.

6. Set SIZ_NTBLD to fre. For WRK, only Free (fre) build is supported because
the included prebuilt libraries are 'Free'.

7. Uncomment _NT_TARGET_VERSION. Make sure _NT_TARGET_VERSION is set to 0x0502.

8. Save as siz_WRKRazzle.%SIZ_NTARCH%%SIZ_NTBLD%.cmd
   (e.g. siz_WRKRazzle.x86fre.cmd).

NOTE: You may create as many siz_*.cmd script files as you need. For example, you may have both siz_WRKRazzle.x86fre.cmd and siz_WRKRazzle.amd64fre.cmd for building x86fre and amd64fre, respectively.

The following is an example siz_WRKRazzle.x86fre.cmd script file:

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@echo off

REM //
REM // SIZ_NTROOT: Path to the NT 4.5 source root (e.g. W:\trunk.x86chk)
REM //

set SIZ_NTROOT=W:\wrkrazzle

REM //
REM // SIZ_NTTREE: Path to the NT 4.5 binary root (e.g. W:\bin)
REM //

set SIZ_NTTREE=W:\wrkrazzle.bin

REM //
REM // SIZ_NTARCH: Target build architecture [x86, amd64, arm, mips, alpha, ppc]
REM //

set SIZ_NTARCH=x86

REM //
REM // SIZ_NTBLD: Target build type [fre, chk]
REM //

set SIZ_NTBLD=fre

REM //
REM // Repository-specific Parameters
REM //

set _NT_TARGET_VERSION=0x0502

REM //
REM // Call sizzle
REM //

call sizzle.cmd
-------------------------------------------------------------------------------

p.s. Why sizzle.cmd (when it should supposedly be called razzle.cmd)? To be
honest, I don't know. I just decided to name it that. After all, it will make
your processor sizzle once you start a full build, so the nomenclature isn't
totally incorrect.

***

Building the WRKRazzle

Before attempting to build the WRKRazzle, you must have carefully followed the
set up procedure described in the "Setting up the Build Environment" section.
If not, please go over them and make sure that you have correctly set up the
build environment.

1. Open the NTOSBE by clicking the siz_*.cmd script
   (e.g. siz_WRKRazzle.x86fre.cmd).
2. Type 'build' to perform a normal build, 'build -c' to perform a clean build.

That's it.

Depending on your processor performance, you should have the kernel executable
in the binary path you specified in your siz_*.cmd script (SIZ_NTTREE).

***

Limitations

These limitations are inherent to the Windows Research Kernel, not the
WRKRazzle.

1. Checked build is not supported.
2. Only x86 and amd64 processor architectures are supported.
3. Uniprocessor build (up) is not supported.
4. PAE build is not supported (mipae.h is missing).
5. genxx is not performed (genxx input files are missing; though, this should
be relatively easy to reconstruct). NOTE: genxx generates ks* and hal* asm
includes that list kernel struct offsets for use in asm code.

***

Future Plans

There is no plan for new feature implementations in this project. WRKRazzle
will stay as the pure Windows Research Kernel with a few minor modifications
to support building under the Razzle environment.

This project may be forked for other OpenNT research projects that may involve
source code reconstruction and feature implementations tasks.

***
