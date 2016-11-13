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
MINORCOMP=lpc

TARGETNAME=lpc
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\lpcclose.c   \
        ..\lpccompl.c   \
        ..\lpcconn.c    \
        ..\lpccreat.c   \
        ..\lpcinit.c    \
        ..\lpclistn.c   \
        ..\lpcpriv.c    \
        ..\lpcquery.c   \
        ..\lpcqueue.c   \
        ..\lpcrecv.c    \
        ..\lpcreply.c   \
        ..\lpcsend.c

PRECOMPILED_INCLUDE=..\lpcp.h
PRECOMPILED_PCH=lpcp.pch
PRECOMPILED_OBJ=lpcp.obj

SOURCES_USED=..\sources.inc
