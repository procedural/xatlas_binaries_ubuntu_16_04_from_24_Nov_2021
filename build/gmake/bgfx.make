# GNU Make project makefile autogenerated by Premake

ifndef config
  config=release_x86_64
endif

ifndef verbose
  SILENT = @
endif

.PHONY: clean prebuild prelink

ifeq ($(config),release_x86_64)
  RESCOMP = windres
  TARGETDIR = bin/x86_64/Release
  TARGET = $(TARGETDIR)/libbgfx.a
  OBJDIR = obj/x86_64/Release/bgfx
  DEFINES += -DNDEBUG -D__STDC_FORMAT_MACROS
  INCLUDES += -I../../source/thirdparty/bx/include -I../../source/thirdparty/bimg/include -I../../source/thirdparty/bimg/3rdparty -I../../source/thirdparty/bimg/3rdparty/astc-codec/include -I../../source/thirdparty/bimg/3rdparty/iqa/include -I../../source/thirdparty/bgfx/include -I../../source/thirdparty/bgfx/3rdparty -I../../source/thirdparty/bgfx/3rdparty/dxsdk/include -I../../source/thirdparty/bgfx/3rdparty/khronos
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m64 -O3
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -m64 -O3 -std=c++14 -fno-exceptions -fno-rtti
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS +=
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib64 -m64 -s
  LINKCMD = $(AR) -rcs "$@" $(OBJECTS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
all: prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),release_x86)
  RESCOMP = windres
  TARGETDIR = bin/x86/Release
  TARGET = $(TARGETDIR)/libbgfx.a
  OBJDIR = obj/x86/Release/bgfx
  DEFINES += -DNDEBUG -D__STDC_FORMAT_MACROS
  INCLUDES += -I../../source/thirdparty/bx/include -I../../source/thirdparty/bimg/include -I../../source/thirdparty/bimg/3rdparty -I../../source/thirdparty/bimg/3rdparty/astc-codec/include -I../../source/thirdparty/bimg/3rdparty/iqa/include -I../../source/thirdparty/bgfx/include -I../../source/thirdparty/bgfx/3rdparty -I../../source/thirdparty/bgfx/3rdparty/dxsdk/include -I../../source/thirdparty/bgfx/3rdparty/khronos
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m32 -O3
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -m32 -O3 -std=c++14 -fno-exceptions -fno-rtti
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS +=
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib32 -m32 -s
  LINKCMD = $(AR) -rcs "$@" $(OBJECTS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
all: prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),debug_x86_64)
  RESCOMP = windres
  TARGETDIR = bin/x86_64/Debug
  TARGET = $(TARGETDIR)/libbgfx.a
  OBJDIR = obj/x86_64/Debug/bgfx
  DEFINES += -D_DEBUG -D__STDC_FORMAT_MACROS -DBGFX_CONFIG_DEBUG=1
  INCLUDES += -I../../source/thirdparty/bx/include -I../../source/thirdparty/bimg/include -I../../source/thirdparty/bimg/3rdparty -I../../source/thirdparty/bimg/3rdparty/astc-codec/include -I../../source/thirdparty/bimg/3rdparty/iqa/include -I../../source/thirdparty/bgfx/include -I../../source/thirdparty/bgfx/3rdparty -I../../source/thirdparty/bgfx/3rdparty/dxsdk/include -I../../source/thirdparty/bgfx/3rdparty/khronos
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m64 -Og -g
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -m64 -Og -g -std=c++14 -fno-exceptions -fno-rtti
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS +=
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib64 -m64
  LINKCMD = $(AR) -rcs "$@" $(OBJECTS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
all: prebuild prelink $(TARGET)
	@:

endif

ifeq ($(config),debug_x86)
  RESCOMP = windres
  TARGETDIR = bin/x86/Debug
  TARGET = $(TARGETDIR)/libbgfx.a
  OBJDIR = obj/x86/Debug/bgfx
  DEFINES += -D_DEBUG -D__STDC_FORMAT_MACROS -DBGFX_CONFIG_DEBUG=1
  INCLUDES += -I../../source/thirdparty/bx/include -I../../source/thirdparty/bimg/include -I../../source/thirdparty/bimg/3rdparty -I../../source/thirdparty/bimg/3rdparty/astc-codec/include -I../../source/thirdparty/bimg/3rdparty/iqa/include -I../../source/thirdparty/bgfx/include -I../../source/thirdparty/bgfx/3rdparty -I../../source/thirdparty/bgfx/3rdparty/dxsdk/include -I../../source/thirdparty/bgfx/3rdparty/khronos
  FORCE_INCLUDE +=
  ALL_CPPFLAGS += $(CPPFLAGS) -MMD -MP $(DEFINES) $(INCLUDES)
  ALL_CFLAGS += $(CFLAGS) $(ALL_CPPFLAGS) -m32 -Og -g
  ALL_CXXFLAGS += $(CXXFLAGS) $(ALL_CPPFLAGS) -m32 -Og -g -std=c++14 -fno-exceptions -fno-rtti
  ALL_RESFLAGS += $(RESFLAGS) $(DEFINES) $(INCLUDES)
  LIBS +=
  LDDEPS +=
  ALL_LDFLAGS += $(LDFLAGS) -L/usr/lib32 -m32
  LINKCMD = $(AR) -rcs "$@" $(OBJECTS)
  define PREBUILDCMDS
  endef
  define PRELINKCMDS
  endef
  define POSTBUILDCMDS
  endef
all: prebuild prelink $(TARGET)
	@:

endif

OBJECTS := \
	$(OBJDIR)/bgfx.o \
	$(OBJDIR)/debug_renderdoc.o \
	$(OBJDIR)/dxgi.o \
	$(OBJDIR)/glcontext_egl.o \
	$(OBJDIR)/glcontext_glx.o \
	$(OBJDIR)/glcontext_html5.o \
	$(OBJDIR)/glcontext_wgl.o \
	$(OBJDIR)/nvapi.o \
	$(OBJDIR)/renderer_d3d11.o \
	$(OBJDIR)/renderer_d3d12.o \
	$(OBJDIR)/renderer_d3d9.o \
	$(OBJDIR)/renderer_gl.o \
	$(OBJDIR)/renderer_gnm.o \
	$(OBJDIR)/renderer_noop.o \
	$(OBJDIR)/renderer_nvn.o \
	$(OBJDIR)/renderer_vk.o \
	$(OBJDIR)/renderer_webgpu.o \
	$(OBJDIR)/shader.o \
	$(OBJDIR)/shader_dx9bc.o \
	$(OBJDIR)/shader_dxbc.o \
	$(OBJDIR)/shader_spirv.o \
	$(OBJDIR)/topology.o \
	$(OBJDIR)/vertexlayout.o \

RESOURCES := \

CUSTOMFILES := \

SHELLTYPE := posix
ifeq (.exe,$(findstring .exe,$(ComSpec)))
	SHELLTYPE := msdos
endif

$(TARGET): $(GCH) ${CUSTOMFILES} $(OBJECTS) $(LDDEPS) $(RESOURCES) | $(TARGETDIR)
	@echo Linking bgfx
	$(SILENT) $(LINKCMD)
	$(POSTBUILDCMDS)

$(CUSTOMFILES): | $(OBJDIR)

$(TARGETDIR):
	@echo Creating $(TARGETDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(TARGETDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(TARGETDIR))
endif

$(OBJDIR):
	@echo Creating $(OBJDIR)
ifeq (posix,$(SHELLTYPE))
	$(SILENT) mkdir -p $(OBJDIR)
else
	$(SILENT) mkdir $(subst /,\\,$(OBJDIR))
endif

clean:
	@echo Cleaning bgfx
ifeq (posix,$(SHELLTYPE))
	$(SILENT) rm -f  $(TARGET)
	$(SILENT) rm -rf $(OBJDIR)
else
	$(SILENT) if exist $(subst /,\\,$(TARGET)) del $(subst /,\\,$(TARGET))
	$(SILENT) if exist $(subst /,\\,$(OBJDIR)) rmdir /s /q $(subst /,\\,$(OBJDIR))
endif

prebuild:
	$(PREBUILDCMDS)

prelink:
	$(PRELINKCMDS)

ifneq (,$(PCH))
$(OBJECTS): $(GCH) $(PCH) | $(OBJDIR)
$(GCH): $(PCH) | $(OBJDIR)
	@echo $(notdir $<)
	$(SILENT) $(CXX) -x c++-header $(ALL_CXXFLAGS) -o "$@" -MF "$(@:%.gch=%.d)" -c "$<"
else
$(OBJECTS): | $(OBJDIR)
endif

$(OBJDIR)/bgfx.o: ../../source/thirdparty/bgfx/src/bgfx.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/debug_renderdoc.o: ../../source/thirdparty/bgfx/src/debug_renderdoc.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/dxgi.o: ../../source/thirdparty/bgfx/src/dxgi.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/glcontext_egl.o: ../../source/thirdparty/bgfx/src/glcontext_egl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/glcontext_glx.o: ../../source/thirdparty/bgfx/src/glcontext_glx.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/glcontext_html5.o: ../../source/thirdparty/bgfx/src/glcontext_html5.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/glcontext_wgl.o: ../../source/thirdparty/bgfx/src/glcontext_wgl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/nvapi.o: ../../source/thirdparty/bgfx/src/nvapi.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_d3d11.o: ../../source/thirdparty/bgfx/src/renderer_d3d11.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_d3d12.o: ../../source/thirdparty/bgfx/src/renderer_d3d12.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_d3d9.o: ../../source/thirdparty/bgfx/src/renderer_d3d9.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_gl.o: ../../source/thirdparty/bgfx/src/renderer_gl.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_gnm.o: ../../source/thirdparty/bgfx/src/renderer_gnm.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_noop.o: ../../source/thirdparty/bgfx/src/renderer_noop.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_nvn.o: ../../source/thirdparty/bgfx/src/renderer_nvn.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_vk.o: ../../source/thirdparty/bgfx/src/renderer_vk.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/renderer_webgpu.o: ../../source/thirdparty/bgfx/src/renderer_webgpu.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/shader.o: ../../source/thirdparty/bgfx/src/shader.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/shader_dx9bc.o: ../../source/thirdparty/bgfx/src/shader_dx9bc.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/shader_dxbc.o: ../../source/thirdparty/bgfx/src/shader_dxbc.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/shader_spirv.o: ../../source/thirdparty/bgfx/src/shader_spirv.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/topology.o: ../../source/thirdparty/bgfx/src/topology.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"
$(OBJDIR)/vertexlayout.o: ../../source/thirdparty/bgfx/src/vertexlayout.cpp
	@echo $(notdir $<)
	$(SILENT) $(CXX) $(ALL_CXXFLAGS) $(FORCE_INCLUDE) -o "$@" -MF "$(@:%.o=%.d)" -c "$<"

-include $(OBJECTS:%.o=%.d)
ifneq (,$(PCH))
  -include $(OBJDIR)/$(notdir $(PCH)).d
endif