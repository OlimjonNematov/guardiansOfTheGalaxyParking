# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Users/olimjonnematov/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/olimjonnematov/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/olimjonnematov/Documents/c++/project4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/olimjonnematov/Documents/c++/project4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project4.dir/flags.make

CMakeFiles/project4.dir/main.cpp.o: CMakeFiles/project4.dir/flags.make
CMakeFiles/project4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olimjonnematov/Documents/c++/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project4.dir/main.cpp.o"
	/usr/local/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project4.dir/main.cpp.o -c /Users/olimjonnematov/Documents/c++/project4/main.cpp

CMakeFiles/project4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project4.dir/main.cpp.i"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olimjonnematov/Documents/c++/project4/main.cpp > CMakeFiles/project4.dir/main.cpp.i

CMakeFiles/project4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project4.dir/main.cpp.s"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olimjonnematov/Documents/c++/project4/main.cpp -o CMakeFiles/project4.dir/main.cpp.s

CMakeFiles/project4.dir/ticket.cpp.o: CMakeFiles/project4.dir/flags.make
CMakeFiles/project4.dir/ticket.cpp.o: ../ticket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olimjonnematov/Documents/c++/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project4.dir/ticket.cpp.o"
	/usr/local/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project4.dir/ticket.cpp.o -c /Users/olimjonnematov/Documents/c++/project4/ticket.cpp

CMakeFiles/project4.dir/ticket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project4.dir/ticket.cpp.i"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olimjonnematov/Documents/c++/project4/ticket.cpp > CMakeFiles/project4.dir/ticket.cpp.i

CMakeFiles/project4.dir/ticket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project4.dir/ticket.cpp.s"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olimjonnematov/Documents/c++/project4/ticket.cpp -o CMakeFiles/project4.dir/ticket.cpp.s

CMakeFiles/project4.dir/linkedList.cpp.o: CMakeFiles/project4.dir/flags.make
CMakeFiles/project4.dir/linkedList.cpp.o: ../linkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olimjonnematov/Documents/c++/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project4.dir/linkedList.cpp.o"
	/usr/local/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project4.dir/linkedList.cpp.o -c /Users/olimjonnematov/Documents/c++/project4/linkedList.cpp

CMakeFiles/project4.dir/linkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project4.dir/linkedList.cpp.i"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olimjonnematov/Documents/c++/project4/linkedList.cpp > CMakeFiles/project4.dir/linkedList.cpp.i

CMakeFiles/project4.dir/linkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project4.dir/linkedList.cpp.s"
	/usr/local/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olimjonnematov/Documents/c++/project4/linkedList.cpp -o CMakeFiles/project4.dir/linkedList.cpp.s

# Object files for target project4
project4_OBJECTS = \
"CMakeFiles/project4.dir/main.cpp.o" \
"CMakeFiles/project4.dir/ticket.cpp.o" \
"CMakeFiles/project4.dir/linkedList.cpp.o"

# External object files for target project4
project4_EXTERNAL_OBJECTS =

project4: CMakeFiles/project4.dir/main.cpp.o
project4: CMakeFiles/project4.dir/ticket.cpp.o
project4: CMakeFiles/project4.dir/linkedList.cpp.o
project4: CMakeFiles/project4.dir/build.make
project4: CMakeFiles/project4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olimjonnematov/Documents/c++/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable project4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project4.dir/build: project4

.PHONY : CMakeFiles/project4.dir/build

CMakeFiles/project4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project4.dir/clean

CMakeFiles/project4.dir/depend:
	cd /Users/olimjonnematov/Documents/c++/project4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olimjonnematov/Documents/c++/project4 /Users/olimjonnematov/Documents/c++/project4 /Users/olimjonnematov/Documents/c++/project4/cmake-build-debug /Users/olimjonnematov/Documents/c++/project4/cmake-build-debug /Users/olimjonnematov/Documents/c++/project4/cmake-build-debug/CMakeFiles/project4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project4.dir/depend

