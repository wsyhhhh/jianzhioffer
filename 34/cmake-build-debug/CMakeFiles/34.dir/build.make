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
CMAKE_SOURCE_DIR = F:\code\34

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\code\34\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/34.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/34.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/34.dir/flags.make

CMakeFiles/34.dir/main.cpp.obj: CMakeFiles/34.dir/flags.make
CMakeFiles/34.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\code\34\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/34.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\34.dir\main.cpp.obj -c F:\code\34\main.cpp

CMakeFiles/34.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/34.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\code\34\main.cpp > CMakeFiles\34.dir\main.cpp.i

CMakeFiles/34.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/34.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\code\34\main.cpp -o CMakeFiles\34.dir\main.cpp.s

CMakeFiles/34.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/34.dir/main.cpp.obj.requires

CMakeFiles/34.dir/main.cpp.obj.provides: CMakeFiles/34.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\34.dir\build.make CMakeFiles/34.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/34.dir/main.cpp.obj.provides

CMakeFiles/34.dir/main.cpp.obj.provides.build: CMakeFiles/34.dir/main.cpp.obj


# Object files for target 34
34_OBJECTS = \
"CMakeFiles/34.dir/main.cpp.obj"

# External object files for target 34
34_EXTERNAL_OBJECTS =

34.exe: CMakeFiles/34.dir/main.cpp.obj
34.exe: CMakeFiles/34.dir/build.make
34.exe: CMakeFiles/34.dir/linklibs.rsp
34.exe: CMakeFiles/34.dir/objects1.rsp
34.exe: CMakeFiles/34.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\code\34\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 34.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\34.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/34.dir/build: 34.exe

.PHONY : CMakeFiles/34.dir/build

CMakeFiles/34.dir/requires: CMakeFiles/34.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/34.dir/requires

CMakeFiles/34.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\34.dir\cmake_clean.cmake
.PHONY : CMakeFiles/34.dir/clean

CMakeFiles/34.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\code\34 F:\code\34 F:\code\34\cmake-build-debug F:\code\34\cmake-build-debug F:\code\34\cmake-build-debug\CMakeFiles\34.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/34.dir/depend

