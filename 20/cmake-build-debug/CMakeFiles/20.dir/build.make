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
CMAKE_SOURCE_DIR = F:\code\20

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\code\20\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/20.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20.dir/flags.make

CMakeFiles/20.dir/main.cpp.obj: CMakeFiles/20.dir/flags.make
CMakeFiles/20.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\code\20\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/20.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\20.dir\main.cpp.obj -c F:\code\20\main.cpp

CMakeFiles/20.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\code\20\main.cpp > CMakeFiles\20.dir\main.cpp.i

CMakeFiles/20.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\code\20\main.cpp -o CMakeFiles\20.dir\main.cpp.s

CMakeFiles/20.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/20.dir/main.cpp.obj.requires

CMakeFiles/20.dir/main.cpp.obj.provides: CMakeFiles/20.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\20.dir\build.make CMakeFiles/20.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/20.dir/main.cpp.obj.provides

CMakeFiles/20.dir/main.cpp.obj.provides.build: CMakeFiles/20.dir/main.cpp.obj


# Object files for target 20
20_OBJECTS = \
"CMakeFiles/20.dir/main.cpp.obj"

# External object files for target 20
20_EXTERNAL_OBJECTS =

20.exe: CMakeFiles/20.dir/main.cpp.obj
20.exe: CMakeFiles/20.dir/build.make
20.exe: CMakeFiles/20.dir/linklibs.rsp
20.exe: CMakeFiles/20.dir/objects1.rsp
20.exe: CMakeFiles/20.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\code\20\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 20.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\20.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20.dir/build: 20.exe

.PHONY : CMakeFiles/20.dir/build

CMakeFiles/20.dir/requires: CMakeFiles/20.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/20.dir/requires

CMakeFiles/20.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\20.dir\cmake_clean.cmake
.PHONY : CMakeFiles/20.dir/clean

CMakeFiles/20.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\code\20 F:\code\20 F:\code\20\cmake-build-debug F:\code\20\cmake-build-debug F:\code\20\cmake-build-debug\CMakeFiles\20.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20.dir/depend
