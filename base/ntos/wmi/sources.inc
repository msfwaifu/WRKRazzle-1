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
MINORCOMP=wmi

TARGETNAME=wmi
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_ -DUNICODE

SOURCES=..\alloc.c      \
        ..\api.c        \
        ..\callouts.c   \
        ..\chunk.c      \
        ..\consumer.c   \
        ..\dataprov.c   \
        ..\ds.c         \
        ..\enabdisa.c   \
        ..\globalog.c   \
        ..\mca.c        \
        ..\notify.c     \
        ..\provider.c   \
        ..\register.c   \
        ..\secure.c     \
        ..\smbios.c     \
        ..\traceapi.c   \
        ..\tracelog.c   \
        ..\tracesup.c   \
        ..\wmi.c        \
        ..\wmidata.c

SOURCES_USED=..\sources.inc
