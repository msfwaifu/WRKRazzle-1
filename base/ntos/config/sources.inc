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
MINORCOMP=config

TARGETNAME=config
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH);$(HALKIT_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_ -D_WANT_MACHINE_IDENTIFICATION

SOURCES=..\cmalloc.c    \
        ..\cmapi.c      \
        ..\cmapi2.c     \
        ..\cmboot.c     \
        ..\cmchek.c     \
        ..\cmchek2.c    \
        ..\cmclose.c    \
        ..\cmconfig.c   \
        ..\cmcontrl.c   \
        ..\cmdat.c      \
        ..\cmdat2.c     \
        ..\cmdatini.c   \
        ..\cmdelay.c    \
        ..\cmdelete.c   \
        ..\cmdown.c     \
        ..\cmgquota.c   \
        ..\cmhook.c     \
        ..\cmhvlist.c   \
        ..\cmindex.c    \
        ..\cminit.c     \
        ..\cmmapvw.c    \
        ..\cmname.c     \
        ..\cmnotify.c   \
        ..\cmparse.c    \
        ..\cmparse2.c   \
        ..\cmquery.c    \
        ..\cmsavres.c   \
        ..\cmse.c       \
        ..\cmsecache.c  \
        ..\cmsubs.c     \
        ..\cmsubs2.c    \
        ..\cmsubs3.c    \
        ..\cmsysini.c   \
        ..\cmtrecpy.c   \
        ..\cmtredel.c   \
        ..\cmtree.c     \
        ..\cmvalue.c    \
        ..\cmwmi.c      \
        ..\cmworker.c   \
        ..\cmwrapr.c    \
        ..\cmwrapr2.c   \
        ..\hivebin.c    \
        ..\hivecell.c   \
        ..\hivechek.c   \
        ..\hivefree.c   \
        ..\hivehint.c   \
        ..\hiveinit.c   \
        ..\hiveload.c   \
        ..\hivemap.c    \
        ..\hivesum.c    \
        ..\hivesync.c   \
        ..\ntapi.c

PRECOMPILED_INCLUDE=..\cmp.h
PRECOMPILED_PCH=cmp.pch
PRECOMPILED_OBJ=cmp.obj

SOURCES_USED=..\sources.inc
