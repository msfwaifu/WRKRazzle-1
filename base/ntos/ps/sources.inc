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
MINORCOMP=ps

TARGETNAME=ps
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;..\..\ke;$(BASE_INC_PATH);$(SDKTOOLS_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\create.c     \
        ..\kulookup.c   \
        ..\pscid.c      \
        ..\psctx.c      \
        ..\psdelete.c   \
        ..\psenum.c     \
        ..\pshelper.c   \
        ..\psimpers.c   \
        ..\psinit.c     \
        ..\psjob.c      \
        ..\psopen.c     \
        ..\psquery.c    \
        ..\psquota.c    \
        ..\psspnd.c     \
        ..\security.c

PRECOMPILED_INCLUDE=..\psp.h
PRECOMPILED_PCH=psp.pch
PRECOMPILED_OBJ=psp.obj

SOURCES_USED=..\sources.inc
