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
CMAKE_SOURCE_DIR = /home/user/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/NFAPI_COMMON_LIB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NFAPI_COMMON_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NFAPI_COMMON_LIB.dir/flags.make

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o: CMakeFiles/NFAPI_COMMON_LIB.dir/flags.make
CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o: /home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o   -c /home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c > CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.i

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c -o CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.s

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.requires:

.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.requires

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.provides: CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.requires
	$(MAKE) -f CMakeFiles/NFAPI_COMMON_LIB.dir/build.make CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.provides.build
.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.provides

CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.provides.build: CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o


# Object files for target NFAPI_COMMON_LIB
NFAPI_COMMON_LIB_OBJECTS = \
"CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o"

# External object files for target NFAPI_COMMON_LIB
NFAPI_COMMON_LIB_EXTERNAL_OBJECTS =

libNFAPI_COMMON_LIB.a: CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o
libNFAPI_COMMON_LIB.a: CMakeFiles/NFAPI_COMMON_LIB.dir/build.make
libNFAPI_COMMON_LIB.a: CMakeFiles/NFAPI_COMMON_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libNFAPI_COMMON_LIB.a"
	$(CMAKE_COMMAND) -P CMakeFiles/NFAPI_COMMON_LIB.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NFAPI_COMMON_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NFAPI_COMMON_LIB.dir/build: libNFAPI_COMMON_LIB.a

.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/build

CMakeFiles/NFAPI_COMMON_LIB.dir/requires: CMakeFiles/NFAPI_COMMON_LIB.dir/home/user/openairinterface5g/nfapi/open-nFAPI/common/src/debug.c.o.requires

.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/requires

CMakeFiles/NFAPI_COMMON_LIB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NFAPI_COMMON_LIB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/clean

CMakeFiles/NFAPI_COMMON_LIB.dir/depend:
	cd /home/user/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/openairinterface5g/cmake_targets/lte_build_oai /home/user/openairinterface5g/cmake_targets/lte_build_oai /home/user/openairinterface5g/cmake_targets/lte_build_oai/build /home/user/openairinterface5g/cmake_targets/lte_build_oai/build /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/NFAPI_COMMON_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NFAPI_COMMON_LIB.dir/depend

