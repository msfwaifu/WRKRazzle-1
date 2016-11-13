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
MINORCOMP=iomgr

TARGETNAME=iomgr
TARGETTYPE=LIBRARY

INCLUDES=..;..\..;..\..\..\inc;$(BASE_INC_PATH);$(DDK_INC_PATH);$(HALKIT_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\cancelapi.c  \
        ..\complete.c   \
        ..\create.c     \
        ..\dev2dos.c    \
        ..\devctrl.c    \
        ..\dir.c        \
        ..\errorlog.c   \
        ..\fsctrl.c     \
        ..\internal.c   \
        ..\iodata.c     \
        ..\ioinit.c     \
        ..\iosubs.c     \
        ..\loadunld.c   \
        ..\lock.c       \
        ..\misc.c       \
        ..\objsup.c     \
        ..\open.c       \
        ..\parse.c      \
        ..\qsea.c       \
        ..\qsfs.c       \
        ..\qsinfo.c     \
        ..\qsquota.c    \
        ..\read.c       \
        ..\write.c

PRECOMPILED_INCLUDE=..\iomgr.h
PRECOMPILED_PCH=iomgr.pch
PRECOMPILED_OBJ=iomgr.obj

SOURCES_USED=..\sources.inc
