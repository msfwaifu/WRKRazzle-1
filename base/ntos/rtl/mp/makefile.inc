!ifdef PASS0ONLY
.SUFFIXES: .c
!endif

$(_OBJ_DIR)\$(TARGET_DIRECTORY)\generr.obj: ..\generr.c

..\error.h: $(_OBJ_DIR)\$(TARGET_DIRECTORY)\generr.obj
    generr $? $@
