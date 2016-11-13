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
MINORCOMP=kse

TARGETNAME=ntosse
TARGETTYPE=LIBRARY

INCLUDES=..;..\..\inc;$(BASE_INC_PATH);$(DS_INC_PATH)

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\accessck.c   \
        ..\adtinit.c    \
        ..\adtlog.c     \
        ..\adtutil.c    \
        ..\adtvars.c    \
        ..\capture.c    \
        ..\privileg.c   \
        ..\rmaudit.c    \
        ..\rmlogon.c    \
        ..\rmmain.c     \
        ..\rmvars.c     \
        ..\seassign.c   \
        ..\seastate.c   \
        ..\seaudit.c    \
        ..\seclient.c   \
        ..\seglobal.c   \
        ..\seinit.c     \
        ..\semethod.c   \
        ..\sep.c        \
        ..\sepaudit.c   \
        ..\subject.c    \
        ..\token.c      \
        ..\tokenadj.c   \
        ..\tokendup.c   \
        ..\tokenopn.c   \
        ..\tokenqry.c   \
        ..\tokenset.c

PRECOMPILED_INCLUDE=..\pch.h
PRECOMPILED_PCH=pch.pch
PRECOMPILED_OBJ=pch.obj

SOURCES_USED=..\sources.inc
