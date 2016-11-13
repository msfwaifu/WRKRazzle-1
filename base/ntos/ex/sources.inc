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
MINORCOMP=ex

TARGETNAME=ex
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;..\..\ke;$(BASE_INC_PATH);$(HALKIT_INC_PATH);$(SDKTOOLS_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\callback.c   \
        ..\callperf.c   \
        ..\delay.c      \
        ..\event.c      \
        ..\eventpr.c    \
        ..\exatom.c     \
        ..\exdata.c     \
        ..\exinit.c     \
        ..\fmutexc.c    \
        ..\handle.c     \
        ..\harderr.c    \
        ..\keyedevent.c \
        ..\lookasid.c   \
        ..\luid.c       \
        ..\mutant.c     \
        ..\nbqueue.c    \
        ..\pool.c       \
        ..\probe.c      \
        ..\profile.c    \
        ..\pushlock.c   \
        ..\raise.c      \
        ..\resource.c   \
        ..\rundown.c    \
        ..\semphore.c   \
        ..\sysinfo.c    \
        ..\timer.c      \
        ..\uuid.c       \
        ..\win32.c      \
        ..\worker.c     \
        ..\zone.c

PRECOMPILED_INCLUDE=..\exp.h
PRECOMPILED_PCH=exp.pch
PRECOMPILED_OBJ=exp.obj

SOURCES_USED=..\sources.inc
