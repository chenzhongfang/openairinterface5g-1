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
CMAKE_SOURCE_DIR = /home/user/openairinterface5g/cmake_targets/basic_simulator/enb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/openairinterface5g/cmake_targets/basic_simulator/enb

# Include any dependencies generated for this target.
include CMakeFiles/UDP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UDP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UDP.dir/flags.make

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o: CMakeFiles/UDP.dir/flags.make
CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o: /home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o   -c /home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c > CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.i

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c -o CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.s

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.requires:

.PHONY : CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.requires

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.provides: CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.requires
	$(MAKE) -f CMakeFiles/UDP.dir/build.make CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.provides.build
.PHONY : CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.provides

CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.provides.build: CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o


# Object files for target UDP
UDP_OBJECTS = \
"CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o"

# External object files for target UDP
UDP_EXTERNAL_OBJECTS =

libUDP.a: CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o
libUDP.a: CMakeFiles/UDP.dir/build.make
libUDP.a: CMakeFiles/UDP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libUDP.a"
	$(CMAKE_COMMAND) -P CMakeFiles/UDP.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UDP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UDP.dir/build: libUDP.a

.PHONY : CMakeFiles/UDP.dir/build

CMakeFiles/UDP.dir/requires: CMakeFiles/UDP.dir/home/user/openairinterface5g/openair3/UDP/udp_eNB_task.c.o.requires

.PHONY : CMakeFiles/UDP.dir/requires

CMakeFiles/UDP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UDP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UDP.dir/clean

CMakeFiles/UDP.dir/depend:
	cd /home/user/openairinterface5g/cmake_targets/basic_simulator/enb && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/UDP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UDP.dir/depend

