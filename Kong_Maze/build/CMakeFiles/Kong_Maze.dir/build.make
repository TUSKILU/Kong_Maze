# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/workspace/Kong_Maze

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/workspace/Kong_Maze/build

# Include any dependencies generated for this target.
include CMakeFiles/Kong_Maze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kong_Maze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kong_Maze.dir/flags.make

CMakeFiles/Kong_Maze.dir/src/main.cpp.o: CMakeFiles/Kong_Maze.dir/flags.make
CMakeFiles/Kong_Maze.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/Kong_Maze/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Kong_Maze.dir/src/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kong_Maze.dir/src/main.cpp.o -c /home/workspace/Kong_Maze/src/main.cpp

CMakeFiles/Kong_Maze.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kong_Maze.dir/src/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/Kong_Maze/src/main.cpp > CMakeFiles/Kong_Maze.dir/src/main.cpp.i

CMakeFiles/Kong_Maze.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kong_Maze.dir/src/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/Kong_Maze/src/main.cpp -o CMakeFiles/Kong_Maze.dir/src/main.cpp.s

CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o: CMakeFiles/Kong_Maze.dir/flags.make
CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/Kong_Maze/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o -c /home/workspace/Kong_Maze/src/renderer.cpp

CMakeFiles/Kong_Maze.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kong_Maze.dir/src/renderer.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/Kong_Maze/src/renderer.cpp > CMakeFiles/Kong_Maze.dir/src/renderer.cpp.i

CMakeFiles/Kong_Maze.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kong_Maze.dir/src/renderer.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/Kong_Maze/src/renderer.cpp -o CMakeFiles/Kong_Maze.dir/src/renderer.cpp.s

CMakeFiles/Kong_Maze.dir/src/game.cpp.o: CMakeFiles/Kong_Maze.dir/flags.make
CMakeFiles/Kong_Maze.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/Kong_Maze/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Kong_Maze.dir/src/game.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kong_Maze.dir/src/game.cpp.o -c /home/workspace/Kong_Maze/src/game.cpp

CMakeFiles/Kong_Maze.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kong_Maze.dir/src/game.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/Kong_Maze/src/game.cpp > CMakeFiles/Kong_Maze.dir/src/game.cpp.i

CMakeFiles/Kong_Maze.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kong_Maze.dir/src/game.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/Kong_Maze/src/game.cpp -o CMakeFiles/Kong_Maze.dir/src/game.cpp.s

CMakeFiles/Kong_Maze.dir/src/controller.cpp.o: CMakeFiles/Kong_Maze.dir/flags.make
CMakeFiles/Kong_Maze.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/Kong_Maze/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Kong_Maze.dir/src/controller.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kong_Maze.dir/src/controller.cpp.o -c /home/workspace/Kong_Maze/src/controller.cpp

CMakeFiles/Kong_Maze.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kong_Maze.dir/src/controller.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/Kong_Maze/src/controller.cpp > CMakeFiles/Kong_Maze.dir/src/controller.cpp.i

CMakeFiles/Kong_Maze.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kong_Maze.dir/src/controller.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/Kong_Maze/src/controller.cpp -o CMakeFiles/Kong_Maze.dir/src/controller.cpp.s

# Object files for target Kong_Maze
Kong_Maze_OBJECTS = \
"CMakeFiles/Kong_Maze.dir/src/main.cpp.o" \
"CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o" \
"CMakeFiles/Kong_Maze.dir/src/game.cpp.o" \
"CMakeFiles/Kong_Maze.dir/src/controller.cpp.o"

# External object files for target Kong_Maze
Kong_Maze_EXTERNAL_OBJECTS =

Kong_Maze: CMakeFiles/Kong_Maze.dir/src/main.cpp.o
Kong_Maze: CMakeFiles/Kong_Maze.dir/src/renderer.cpp.o
Kong_Maze: CMakeFiles/Kong_Maze.dir/src/game.cpp.o
Kong_Maze: CMakeFiles/Kong_Maze.dir/src/controller.cpp.o
Kong_Maze: CMakeFiles/Kong_Maze.dir/build.make
Kong_Maze: CMakeFiles/Kong_Maze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/workspace/Kong_Maze/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Kong_Maze"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kong_Maze.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kong_Maze.dir/build: Kong_Maze

.PHONY : CMakeFiles/Kong_Maze.dir/build

CMakeFiles/Kong_Maze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Kong_Maze.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Kong_Maze.dir/clean

CMakeFiles/Kong_Maze.dir/depend:
	cd /home/workspace/Kong_Maze/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/workspace/Kong_Maze /home/workspace/Kong_Maze /home/workspace/Kong_Maze/build /home/workspace/Kong_Maze/build /home/workspace/Kong_Maze/build/CMakeFiles/Kong_Maze.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Kong_Maze.dir/depend

