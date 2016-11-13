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
MINORCOMP=dbgk

TARGETNAME=dbgk
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH);$(SDKTOOLS_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\dbgkobj.c    \
        ..\dbgkport.c   \
        ..\dbgkproc.c

SOURCES_USED=..\sources.inc
