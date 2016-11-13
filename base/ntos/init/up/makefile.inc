PREBUILT_DIR=..\..\PREBUILT\$(TARGET_DIRECTORY)

$(O)\$(NTTEST).lib:

$(O)\$(NTTEST).def: ..\ntoskrnl.src ..\$(TARGET_DIRECTORY)def.src
    copy ..\ntoskrnl.src+..\$(TARGET_DIRECTORY)def.src $(O)\$(NTTEST).pp
    $(TARGET_CPP) -nologo -EP $(TARGET_DEFINES) $(TARGET_DBG_DEFINES) $(C_DEFINES) \
                  $(O)\$(NTTEST).pp > $(O)\$(NTTEST).def
    -del $(O)\$(NTTEST).pp

$(O)\$(NTTEST).lib:
    @echo Creating $(NTTEST).lib
    lib -nologo \
        $(LINK_LIB_IGNORE_FLAG) \
        -WX \
        -nodefaultlib \
        -machine:$(TARGET_DIRECTORY) \
        $(TARGETPATH)\$(TARGET_DIRECTORY)\*.lib \
        $(PREBUILT_DIR)\ntoswrk.lib \
        -def:$(O)\$(NTTEST).def \
        -out:$(O)\ntkrnlmp.lib
    lib -nologo $(O)\ntkrnlmp.lib $(PREBUILT_DIR)\ntosarch.lib -out:$(O)\ntkrnlmp.lib
