# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vmux42.mk

default: /home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/build/mux42

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vmux42
# Module prefix (from --prefix)
VM_MODPREFIX = Vmux42
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/usr/include/SDL2 \
	-D_REENTRANT \
	-I/home/hh/ysyx-workbench/nvboard/usr/include \
	-DTOP_NAME="Vmux42" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/hh/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/build \
	/home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/csrc \


### Default rules...
# Include list of all generated classes
include Vmux42_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/build/mux42: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
