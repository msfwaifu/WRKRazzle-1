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
MINORCOMP=mm

TARGETNAME=mm
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\acceschk.c   \
        ..\addrsup.c    \
        ..\allocpag.c   \
        ..\allocvm.c    \
        ..\buildmdl.c   \
        ..\creasect.c   \
        ..\deleteva.c   \
        ..\dmpaddr.c    \
        ..\extsect.c    \
        ..\flushbuf.c   \
        ..\flushsec.c   \
        ..\forksup.c    \
        ..\freevm.c     \
        ..\hypermap.c   \
        ..\iosup.c      \
        ..\lockvm.c     \
        ..\mapcache.c   \
        ..\mapview.c    \
        ..\miglobal.c   \
        ..\mmfault.c    \
        ..\mminit.c     \
        ..\mmquota.c    \
        ..\mmsup.c      \
        ..\modwrite.c   \
        ..\pagfault.c   \
        ..\pfndec.c     \
        ..\pfnlist.c    \
        ..\physical.c   \
        ..\procsup.c    \
        ..\protect.c    \
        ..\querysec.c   \
        ..\queryvm.c    \
        ..\readwrt.c    \
        ..\sectsup.c    \
        ..\session.c    \
        ..\sessload.c   \
        ..\shutdown.c   \
        ..\sysload.c    \
        ..\sysptes.c    \
        ..\umapview.c   \
        ..\vadtree.c    \
        ..\wrtfault.c   \
        ..\wrtwatch.c   \
        ..\wslist.c     \
        ..\wsmanage.c   \
        ..\wstree.c     \
        ..\zeropage.c

PRECOMPILED_INCLUDE=..\mi.h
PRECOMPILED_PCH=mi.pch
PRECOMPILED_OBJ=mi.obj

SOURCES_USED=..\sources.inc
