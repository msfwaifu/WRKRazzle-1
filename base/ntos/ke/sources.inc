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
MINORCOMP=ke

TARGETNAME=ke
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH);$(HALKIT_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\apcobj.c     \
        ..\apcsup.c     \
        ..\balmgr.c     \
        ..\bugcheck.c   \
        ..\config.c     \
        ..\debug.c      \
        ..\devquobj.c   \
        ..\dpclock.c    \
        ..\dpcobj.c     \
        ..\dpcsup.c     \
        ..\eventobj.c   \
        ..\gateobj.c    \
        ..\hifreqlk.c   \
        ..\idsched.c    \
        ..\interobj.c   \
        ..\kernldat.c   \
        ..\kevutil.c    \
        ..\kiinit.c     \
        ..\miscc.c      \
        ..\mutntobj.c   \
        ..\procobj.c    \
        ..\profobj.c    \
        ..\queueobj.c   \
        ..\raisexcp.c   \
        ..\semphobj.c   \
        ..\thkemul.c    \
        ..\thredobj.c   \
        ..\thredsup.c   \
        ..\timerobj.c   \
        ..\timersup.c   \
        ..\wait.c       \
        ..\waitsup.c    \
        ..\xipi.c       \
        ..\yield.c

NTTARGETFILES=

PRECOMPILED_INCLUDE=..\ki.h
PRECOMPILED_PCH=ki.pch
PRECOMPILED_OBJ=ki.obj

SOURCES_USED=..\sources.inc
