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
CMAKE_COMMAND = /home/dlcgold/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5153.40/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dlcgold/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5153.40/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dlcgold/Documenti/tnds/lezione2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lezione2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lezione2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lezione2.dir/flags.make

CMakeFiles/lezione2.dir/main.cpp.o: CMakeFiles/lezione2.dir/flags.make
CMakeFiles/lezione2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lezione2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lezione2.dir/main.cpp.o -c /home/dlcgold/Documenti/tnds/lezione2/main.cpp

CMakeFiles/lezione2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lezione2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione2/main.cpp > CMakeFiles/lezione2.dir/main.cpp.i

CMakeFiles/lezione2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lezione2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione2/main.cpp -o CMakeFiles/lezione2.dir/main.cpp.s

CMakeFiles/lezione2.dir/Vector.cpp.o: CMakeFiles/lezione2.dir/flags.make
CMakeFiles/lezione2.dir/Vector.cpp.o: ../Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lezione2.dir/Vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lezione2.dir/Vector.cpp.o -c /home/dlcgold/Documenti/tnds/lezione2/Vector.cpp

CMakeFiles/lezione2.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lezione2.dir/Vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione2/Vector.cpp > CMakeFiles/lezione2.dir/Vector.cpp.i

CMakeFiles/lezione2.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lezione2.dir/Vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione2/Vector.cpp -o CMakeFiles/lezione2.dir/Vector.cpp.s

# Object files for target lezione2
lezione2_OBJECTS = \
"CMakeFiles/lezione2.dir/main.cpp.o" \
"CMakeFiles/lezione2.dir/Vector.cpp.o"

# External object files for target lezione2
lezione2_EXTERNAL_OBJECTS =

lezione2: CMakeFiles/lezione2.dir/main.cpp.o
lezione2: CMakeFiles/lezione2.dir/Vector.cpp.o
lezione2: CMakeFiles/lezione2.dir/build.make
lezione2: CMakeFiles/lezione2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lezione2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lezione2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lezione2.dir/build: lezione2

.PHONY : CMakeFiles/lezione2.dir/build

CMakeFiles/lezione2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lezione2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lezione2.dir/clean

CMakeFiles/lezione2.dir/depend:
	cd /home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dlcgold/Documenti/tnds/lezione2 /home/dlcgold/Documenti/tnds/lezione2 /home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug /home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug /home/dlcgold/Documenti/tnds/lezione2/cmake-build-debug/CMakeFiles/lezione2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lezione2.dir/depend

