# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\soft\CLion 2017.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\soft\CLion 2017.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\code\38

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\code\38\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/38.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/38.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/38.dir/flags.make

CMakeFiles/38.dir/main.cpp.obj: CMakeFiles/38.dir/flags.make
CMakeFiles/38.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\code\38\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/38.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\38.dir\main.cpp.obj -c F:\code\38\main.cpp

CMakeFiles/38.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/38.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\code\38\main.cpp > CMakeFiles\38.dir\main.cpp.i

CMakeFiles/38.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/38.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\code\38\main.cpp -o CMakeFiles\38.dir\main.cpp.s

CMakeFiles/38.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/38.dir/main.cpp.obj.requires

CMakeFiles/38.dir/main.cpp.obj.provides: CMakeFiles/38.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\38.dir\build.make CMakeFiles/38.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/38.dir/main.cpp.obj.provides

CMakeFiles/38.dir/main.cpp.obj.provides.build: CMakeFiles/38.dir/main.cpp.obj


# Object files for target 38
38_OBJECTS = \
"CMakeFiles/38.dir/main.cpp.obj"

# External object files for target 38
38_EXTERNAL_OBJECTS =

38.exe: CMakeFiles/38.dir/main.cpp.obj
38.exe: CMakeFiles/38.dir/build.make
38.exe: CMakeFiles/38.dir/linklibs.rsp
38.exe: CMakeFiles/38.dir/objects1.rsp
38.exe: CMakeFiles/38.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\code\38\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 38.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\38.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/38.dir/build: 38.exe

.PHONY : CMakeFiles/38.dir/build

CMakeFiles/38.dir/requires: CMakeFiles/38.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/38.dir/requires

CMakeFiles/38.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\38.dir\cmake_clean.cmake
.PHONY : CMakeFiles/38.dir/clean

CMakeFiles/38.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\code\38 F:\code\38 F:\code\38\cmake-build-debug F:\code\38\cmake-build-debug F:\code\38\cmake-build-debug\CMakeFiles\38.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/38.dir/depend

