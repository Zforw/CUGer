# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zforw/CLionProjects/SweepBomb

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SweepBomb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SweepBomb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SweepBomb.dir/flags.make

CMakeFiles/SweepBomb.dir/main.cpp.o: CMakeFiles/SweepBomb.dir/flags.make
CMakeFiles/SweepBomb.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SweepBomb.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SweepBomb.dir/main.cpp.o -c /Users/zforw/CLionProjects/SweepBomb/main.cpp

CMakeFiles/SweepBomb.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SweepBomb.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zforw/CLionProjects/SweepBomb/main.cpp > CMakeFiles/SweepBomb.dir/main.cpp.i

CMakeFiles/SweepBomb.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SweepBomb.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zforw/CLionProjects/SweepBomb/main.cpp -o CMakeFiles/SweepBomb.dir/main.cpp.s

CMakeFiles/SweepBomb.dir/Game.cpp.o: CMakeFiles/SweepBomb.dir/flags.make
CMakeFiles/SweepBomb.dir/Game.cpp.o: Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SweepBomb.dir/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SweepBomb.dir/Game.cpp.o -c /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/Game.cpp

CMakeFiles/SweepBomb.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SweepBomb.dir/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/Game.cpp > CMakeFiles/SweepBomb.dir/Game.cpp.i

CMakeFiles/SweepBomb.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SweepBomb.dir/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/Game.cpp -o CMakeFiles/SweepBomb.dir/Game.cpp.s

# Object files for target SweepBomb
SweepBomb_OBJECTS = \
"CMakeFiles/SweepBomb.dir/main.cpp.o" \
"CMakeFiles/SweepBomb.dir/Game.cpp.o"

# External object files for target SweepBomb
SweepBomb_EXTERNAL_OBJECTS =

SweepBomb: CMakeFiles/SweepBomb.dir/main.cpp.o
SweepBomb: CMakeFiles/SweepBomb.dir/Game.cpp.o
SweepBomb: CMakeFiles/SweepBomb.dir/build.make
SweepBomb: CMakeFiles/SweepBomb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SweepBomb"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SweepBomb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SweepBomb.dir/build: SweepBomb

.PHONY : CMakeFiles/SweepBomb.dir/build

CMakeFiles/SweepBomb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SweepBomb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SweepBomb.dir/clean

CMakeFiles/SweepBomb.dir/depend:
	cd /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zforw/CLionProjects/SweepBomb /Users/zforw/CLionProjects/SweepBomb /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug /Users/zforw/CLionProjects/SweepBomb/cmake-build-debug/CMakeFiles/SweepBomb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SweepBomb.dir/depend
