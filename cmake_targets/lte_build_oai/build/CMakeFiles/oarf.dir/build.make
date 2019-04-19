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

# Utility rule file for oarf.

# Include the progress variables for this target.
include CMakeFiles/oarf.dir/progress.make

CMakeFiles/oarf: oarf_config_exmimo.oct
CMakeFiles/oarf: oarf_config_exmimo.oct
CMakeFiles/oarf: oarf_get_frame.oct
CMakeFiles/oarf: oarf_stop.oct
CMakeFiles/oarf: oarf_send_frame.oct
CMakeFiles/oarf: oarf_get_num_detected_cards.oct
CMakeFiles/oarf: oarf_stop_without_reset.oct


oarf_config_exmimo.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_config_exmimo.cc
oarf_config_exmimo.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating oarf_config_exmimo.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_config_exmimo.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_config_exmimo.cc

oarf_get_frame.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_get_frame.cc
oarf_get_frame.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating oarf_get_frame.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_get_frame.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_get_frame.cc

oarf_stop.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_stop.cc
oarf_stop.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating oarf_stop.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_stop.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_stop.cc

oarf_send_frame.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_send_frame.cc
oarf_send_frame.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating oarf_send_frame.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_send_frame.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_send_frame.cc

oarf_get_num_detected_cards.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_get_num_detected_cards.cc
oarf_get_num_detected_cards.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating oarf_get_num_detected_cards.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_get_num_detected_cards.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_get_num_detected_cards.cc

oarf_stop_without_reset.oct: /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_stop_without_reset.cc
oarf_stop_without_reset.oct: libOPENAIR0_LIB.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating oarf_stop_without_reset.oct"
	mkoctfile -DEXMIMO -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/COMMON -L/home/user/openairinterface5g/cmake_targets/lte_build_oai/build -lm -lOPENAIR0_LIB -o oarf_stop_without_reset.oct /home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/OCTAVE/oarf_stop_without_reset.cc

oarf: CMakeFiles/oarf
oarf: oarf_config_exmimo.oct
oarf: oarf_get_frame.oct
oarf: oarf_stop.oct
oarf: oarf_send_frame.oct
oarf: oarf_get_num_detected_cards.oct
oarf: oarf_stop_without_reset.oct
oarf: CMakeFiles/oarf.dir/build.make

.PHONY : oarf

# Rule to build all files generated by this target.
CMakeFiles/oarf.dir/build: oarf

.PHONY : CMakeFiles/oarf.dir/build

CMakeFiles/oarf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oarf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oarf.dir/clean

CMakeFiles/oarf.dir/depend:
	cd /home/user/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/openairinterface5g/cmake_targets/lte_build_oai /home/user/openairinterface5g/cmake_targets/lte_build_oai /home/user/openairinterface5g/cmake_targets/lte_build_oai/build /home/user/openairinterface5g/cmake_targets/lte_build_oai/build /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/oarf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oarf.dir/depend

