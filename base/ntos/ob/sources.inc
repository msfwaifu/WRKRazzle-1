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
MINORCOMP=ob

TARGETNAME=ob
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\fastref.c    \
        ..\obclose.c    \
        ..\obcreate.c   \
        ..\obdevmap.c   \
        ..\obdir.c      \
        ..\obhandle.c   \
        ..\obinit.c     \
        ..\obinsert.c   \
        ..\oblink.c     \
        ..\obquery.c    \
        ..\obref.c      \
        ..\obsdata.c    \
        ..\obse.c       \
        ..\obtype.c     \
        ..\obwait.c

PRECOMPILED_INCLUDE=..\obp.h
PRECOMPILED_PCH=obp.pch
PRECOMPILED_OBJ=obp.obj

SOURCES_USED=..\sources.inc
