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

# Utility rule file for generate_T.

# Include the progress variables for this target.
include CMakeFiles/generate_T.dir/progress.make

CMakeFiles/generate_T: /home/user/openairinterface5g/common/utils/T/T_IDs.h


/home/user/openairinterface5g/common/utils/T/T_IDs.h: /home/user/openairinterface5g/common/utils/T/T_messages.txt
/home/user/openairinterface5g/common/utils/T/T_IDs.h: /home/user/openairinterface5g/common/utils/LOG/vcd_signal_dumper.c
/home/user/openairinterface5g/common/utils/T/T_IDs.h: /home/user/openairinterface5g/common/utils/LOG/vcd_signal_dumper.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/user/openairinterface5g/common/utils/T/T_IDs.h"
	cd /home/user/openairinterface5g/common/utils/T && $(MAKE) clean
	cd /home/user/openairinterface5g/common/utils/T && $(MAKE)
	cd /home/user/openairinterface5g/common/utils/T && $(MAKE) check_vcd

generate_T: CMakeFiles/generate_T
generate_T: /home/user/openairinterface5g/common/utils/T/T_IDs.h
generate_T: CMakeFiles/generate_T.dir/build.make

.PHONY : generate_T

# Rule to build all files generated by this target.
CMakeFiles/generate_T.dir/build: generate_T

.PHONY : CMakeFiles/generate_T.dir/build

CMakeFiles/generate_T.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate_T.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate_T.dir/clean

CMakeFiles/generate_T.dir/depend:
	cd /home/user/openairinterface5g/cmake_targets/basic_simulator/enb && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/generate_T.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate_T.dir/depend

