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

    Stephanos Io (stephanos) 09-Jun-2015

!ENDIF

MAJORCOMP=ntos
MINORCOMP=cache

TARGETNAME=cache
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\cachedat.c   \
        ..\cachesub.c   \
        ..\ccperf.c     \
        ..\copysup.c    \
        ..\fssup.c      \
        ..\lazyrite.c   \
        ..\logsup.c     \
        ..\mdlsup.c     \
        ..\pinsup.c     \
        ..\vacbsup.c

PRECOMPILED_INCLUDE=..\cc.h
PRECOMPILED_PCH=cc.pch
PRECOMPILED_OBJ=cc.obj

SOURCES_USED=..\sources.inc
