# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/openairinterface5g/cmake_targets/basic_simulator/ue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/openairinterface5g/cmake_targets/basic_simulator/ue

# Include any dependencies generated for this target.
include CMakeFiles/tcp_bridge_oai.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tcp_bridge_oai.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tcp_bridge_oai.dir/flags.make

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o: CMakeFiles/tcp_bridge_oai.dir/flags.make
CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o: /home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o   -c /home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c > CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.i

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c -o CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.s

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.requires:

.PHONY : CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.requires

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.provides: CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.requires
	$(MAKE) -f CMakeFiles/tcp_bridge_oai.dir/build.make CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.provides.build
.PHONY : CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.provides

CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.provides.build: CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o


# Object files for target tcp_bridge_oai
tcp_bridge_oai_OBJECTS = \
"CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o"

# External object files for target tcp_bridge_oai
tcp_bridge_oai_EXTERNAL_OBJECTS =

libtcp_bridge_oai.so: CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o
libtcp_bridge_oai.so: CMakeFiles/tcp_bridge_oai.dir/build.make
libtcp_bridge_oai.so: CMakeFiles/tcp_bridge_oai.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module libtcp_bridge_oai.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tcp_bridge_oai.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tcp_bridge_oai.dir/build: libtcp_bridge_oai.so

.PHONY : CMakeFiles/tcp_bridge_oai.dir/build

CMakeFiles/tcp_bridge_oai.dir/requires: CMakeFiles/tcp_bridge_oai.dir/home/user/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge_oai.c.o.requires

.PHONY : CMakeFiles/tcp_bridge_oai.dir/requires

CMakeFiles/tcp_bridge_oai.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tcp_bridge_oai.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tcp_bridge_oai.dir/clean

CMakeFiles/tcp_bridge_oai.dir/depend:
	cd /home/user/openairinterface5g/cmake_targets/basic_simulator/ue && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/openairinterface5g/cmake_targets/basic_simulator/ue /home/user/openairinterface5g/cmake_targets/basic_simulator/ue /home/user/openairinterface5g/cmake_targets/basic_simulator/ue /home/user/openairinterface5g/cmake_targets/basic_simulator/ue /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/tcp_bridge_oai.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tcp_bridge_oai.dir/depend

