# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build

# Include any dependencies generated for this target.
include CMakeFiles/current_based_position.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/current_based_position.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/current_based_position.dir/flags.make

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o: CMakeFiles/current_based_position.dir/flags.make
CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o: ../src/j_Current_Based_Position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o -c /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/src/j_Current_Based_Position.cpp

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/src/j_Current_Based_Position.cpp > CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.i

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/src/j_Current_Based_Position.cpp -o CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.s

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.requires:

.PHONY : CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.requires

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.provides: CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.requires
	$(MAKE) -f CMakeFiles/current_based_position.dir/build.make CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.provides.build
.PHONY : CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.provides

CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.provides.build: CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o


# Object files for target current_based_position
current_based_position_OBJECTS = \
"CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o"

# External object files for target current_based_position
current_based_position_EXTERNAL_OBJECTS =

current_based_position: CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o
current_based_position: CMakeFiles/current_based_position.dir/build.make
current_based_position: libdynamixel_workbench.a
current_based_position: /usr/local/lib/libdxl_x64_cpp.so
current_based_position: CMakeFiles/current_based_position.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable current_based_position"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/current_based_position.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/current_based_position.dir/build: current_based_position

.PHONY : CMakeFiles/current_based_position.dir/build

CMakeFiles/current_based_position.dir/requires: CMakeFiles/current_based_position.dir/src/j_Current_Based_Position.cpp.o.requires

.PHONY : CMakeFiles/current_based_position.dir/requires

CMakeFiles/current_based_position.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/current_based_position.dir/cmake_clean.cmake
.PHONY : CMakeFiles/current_based_position.dir/clean

CMakeFiles/current_based_position.dir/depend:
	cd /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build /home/richtong/dynamixel_ws/src/dynamixel-workbench/dynamixel_workbench_toolbox/examples/build/CMakeFiles/current_based_position.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/current_based_position.dir/depend

