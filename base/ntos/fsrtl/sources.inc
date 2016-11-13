!IF 0

Copyright (c) 2015  Microsoft Corporation

Module Name:

    sources.

Abstract:

    This file specifies the target component being built and the list of
    sources files needed to build that component.  Also specifies optional
    compiler switches and libraries that are unique for the component being
    built.

Author:

    Stephanos Io (stephanos) 10-Jun-2015

!ENDIF

MAJORCOMP=ntos
MINORCOMP=FsRtl

TARGETNAME=FsRtl
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\DbcsName.c   \
        ..\FastIo.c     \
        ..\FaultTol.c   \
        ..\FileLock.c   \
        ..\Filter.c     \
        ..\FiltrCtx.c   \
        ..\FsFilter.c   \
        ..\FsRtlPc.c    \
        ..\LargeMcb.c   \
        ..\Name.c       \
        ..\Notify.c     \
        ..\Oplock.c     \
        ..\Pnp.c        \
        ..\StackOvf.c   \
        ..\Tunnel.c     \
        ..\Unc.c

PRECOMPILED_INCLUDE=..\fsrtlp.h
PRECOMPILED_PCH=fsrtlp.pch
PRECOMPILED_OBJ=fsrtlp.obj

SOURCES_USED=..\sources.inc
