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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/97252/Documents/GitHub/orgchart-a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/orgchart_a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/orgchart_a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/orgchart_a.dir/flags.make

CMakeFiles/orgchart_a.dir/main.cpp.o: CMakeFiles/orgchart_a.dir/flags.make
CMakeFiles/orgchart_a.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/orgchart_a.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/orgchart_a.dir/main.cpp.o -c /mnt/c/Users/97252/Documents/GitHub/orgchart-a/main.cpp

CMakeFiles/orgchart_a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/orgchart_a.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/97252/Documents/GitHub/orgchart-a/main.cpp > CMakeFiles/orgchart_a.dir/main.cpp.i

CMakeFiles/orgchart_a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/orgchart_a.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/97252/Documents/GitHub/orgchart-a/main.cpp -o CMakeFiles/orgchart_a.dir/main.cpp.s

CMakeFiles/orgchart_a.dir/OrgChart.cpp.o: CMakeFiles/orgchart_a.dir/flags.make
CMakeFiles/orgchart_a.dir/OrgChart.cpp.o: ../OrgChart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/orgchart_a.dir/OrgChart.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/orgchart_a.dir/OrgChart.cpp.o -c /mnt/c/Users/97252/Documents/GitHub/orgchart-a/OrgChart.cpp

CMakeFiles/orgchart_a.dir/OrgChart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/orgchart_a.dir/OrgChart.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/97252/Documents/GitHub/orgchart-a/OrgChart.cpp > CMakeFiles/orgchart_a.dir/OrgChart.cpp.i

CMakeFiles/orgchart_a.dir/OrgChart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/orgchart_a.dir/OrgChart.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/97252/Documents/GitHub/orgchart-a/OrgChart.cpp -o CMakeFiles/orgchart_a.dir/OrgChart.cpp.s

# Object files for target orgchart_a
orgchart_a_OBJECTS = \
"CMakeFiles/orgchart_a.dir/main.cpp.o" \
"CMakeFiles/orgchart_a.dir/OrgChart.cpp.o"

# External object files for target orgchart_a
orgchart_a_EXTERNAL_OBJECTS =

orgchart_a: CMakeFiles/orgchart_a.dir/main.cpp.o
orgchart_a: CMakeFiles/orgchart_a.dir/OrgChart.cpp.o
orgchart_a: CMakeFiles/orgchart_a.dir/build.make
orgchart_a: CMakeFiles/orgchart_a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable orgchart_a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/orgchart_a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/orgchart_a.dir/build: orgchart_a

.PHONY : CMakeFiles/orgchart_a.dir/build

CMakeFiles/orgchart_a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/orgchart_a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/orgchart_a.dir/clean

CMakeFiles/orgchart_a.dir/depend:
	cd /mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/97252/Documents/GitHub/orgchart-a /mnt/c/Users/97252/Documents/GitHub/orgchart-a /mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug /mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug /mnt/c/Users/97252/Documents/GitHub/orgchart-a/cmake-build-debug/CMakeFiles/orgchart_a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/orgchart_a.dir/depend

