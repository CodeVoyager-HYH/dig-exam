all:
	@echo "Write this Makefile by your self."
 
VSRCS = $(shell find $(./vsrc ) -name "*.v")
# CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
 
INCLUDE = ./vsrc/include
 
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo $(VSRCS)
	verilator --trace --cc --exe --build \
    --top-module top \
    -I$(INCLUDE) ./csrc/sim_main.cpp $(VSRCS) \
	-LDFLAGS -"lreadline"
 
wave: sim
	./obj_dir/Vtop
	gtkwave wave.vcd
 
count:
	find . -name "sim_main.cpp" -or -name "*.[vc]" | xargs wc -l
 
clean:
	rm -rf obj_dir
	rm wave.vcd
 
 
 
include ../Makefile
