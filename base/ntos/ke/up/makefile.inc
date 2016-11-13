#
# This automated kernel file generation script is derived from the NT 4.5 repository. If gensrv
# sdktool is updated in the NTOSBE, this script should also be updated. (stephanos)
#

SERVICES_DIR=$(TARGET_DIRECTORY)
SERVICES_TAB=$(SERVICES_DIR)\services.tab

$(SERVICES_TAB): ..\$(TARGET_DIRECTORY)\services.tab
    @echo Creating $@ from $**
    @if not exist $(SERVICES_DIR) mkdir $(SERVICES_DIR)
    $(C_PREPROCESSOR) $** > $@

$(O)\sysstubs.obj: $(TARGET_DIRECTORY)\sysstubs.$(ASM_SUFFIX)

$(O)\systable.obj: $(TARGET_DIRECTORY)\systable.$(ASM_SUFFIX)

$(TARGET_DIRECTORY)\sysstubs.$(ASM_SUFFIX) $(TARGET_DIRECTORY)\systable.$(ASM_SUFFIX): \
        $(SERVICES_TAB) \
        ..\$(TARGET_DIRECTORY)\table.stb \
        ..\$(TARGET_DIRECTORY)\services.stb
    gensrv -d $(O) -e $(ASM_SUFFIX) -g $(SERVICES_DIR) $(TARGET_BRACES) -s ..\$(TARGET_DIRECTORY)
