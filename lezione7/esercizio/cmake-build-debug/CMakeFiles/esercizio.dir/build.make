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
CMAKE_SOURCE_DIR = /home/dlcgold/Documenti/tnds/lezione7/esercizio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/esercizio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/esercizio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/esercizio.dir/flags.make

CMakeFiles/esercizio.dir/main.cpp.o: CMakeFiles/esercizio.dir/flags.make
CMakeFiles/esercizio.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/esercizio.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/esercizio.dir/main.cpp.o -c /home/dlcgold/Documenti/tnds/lezione7/esercizio/main.cpp

CMakeFiles/esercizio.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/esercizio.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione7/esercizio/main.cpp > CMakeFiles/esercizio.dir/main.cpp.i

CMakeFiles/esercizio.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/esercizio.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione7/esercizio/main.cpp -o CMakeFiles/esercizio.dir/main.cpp.s

CMakeFiles/esercizio.dir/parabola.cpp.o: CMakeFiles/esercizio.dir/flags.make
CMakeFiles/esercizio.dir/parabola.cpp.o: ../parabola.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/esercizio.dir/parabola.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/esercizio.dir/parabola.cpp.o -c /home/dlcgold/Documenti/tnds/lezione7/esercizio/parabola.cpp

CMakeFiles/esercizio.dir/parabola.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/esercizio.dir/parabola.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione7/esercizio/parabola.cpp > CMakeFiles/esercizio.dir/parabola.cpp.i

CMakeFiles/esercizio.dir/parabola.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/esercizio.dir/parabola.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione7/esercizio/parabola.cpp -o CMakeFiles/esercizio.dir/parabola.cpp.s

CMakeFiles/esercizio.dir/solutore.cpp.o: CMakeFiles/esercizio.dir/flags.make
CMakeFiles/esercizio.dir/solutore.cpp.o: ../solutore.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/esercizio.dir/solutore.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/esercizio.dir/solutore.cpp.o -c /home/dlcgold/Documenti/tnds/lezione7/esercizio/solutore.cpp

CMakeFiles/esercizio.dir/solutore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/esercizio.dir/solutore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione7/esercizio/solutore.cpp > CMakeFiles/esercizio.dir/solutore.cpp.i

CMakeFiles/esercizio.dir/solutore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/esercizio.dir/solutore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione7/esercizio/solutore.cpp -o CMakeFiles/esercizio.dir/solutore.cpp.s

CMakeFiles/esercizio.dir/Tan.cpp.o: CMakeFiles/esercizio.dir/flags.make
CMakeFiles/esercizio.dir/Tan.cpp.o: ../Tan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/esercizio.dir/Tan.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/esercizio.dir/Tan.cpp.o -c /home/dlcgold/Documenti/tnds/lezione7/esercizio/Tan.cpp

CMakeFiles/esercizio.dir/Tan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/esercizio.dir/Tan.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dlcgold/Documenti/tnds/lezione7/esercizio/Tan.cpp > CMakeFiles/esercizio.dir/Tan.cpp.i

CMakeFiles/esercizio.dir/Tan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/esercizio.dir/Tan.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dlcgold/Documenti/tnds/lezione7/esercizio/Tan.cpp -o CMakeFiles/esercizio.dir/Tan.cpp.s

# Object files for target esercizio
esercizio_OBJECTS = \
"CMakeFiles/esercizio.dir/main.cpp.o" \
"CMakeFiles/esercizio.dir/parabola.cpp.o" \
"CMakeFiles/esercizio.dir/solutore.cpp.o" \
"CMakeFiles/esercizio.dir/Tan.cpp.o"

# External object files for target esercizio
esercizio_EXTERNAL_OBJECTS =

esercizio: CMakeFiles/esercizio.dir/main.cpp.o
esercizio: CMakeFiles/esercizio.dir/parabola.cpp.o
esercizio: CMakeFiles/esercizio.dir/solutore.cpp.o
esercizio: CMakeFiles/esercizio.dir/Tan.cpp.o
esercizio: CMakeFiles/esercizio.dir/build.make
esercizio: CMakeFiles/esercizio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable esercizio"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/esercizio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/esercizio.dir/build: esercizio

.PHONY : CMakeFiles/esercizio.dir/build

CMakeFiles/esercizio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/esercizio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/esercizio.dir/clean

CMakeFiles/esercizio.dir/depend:
	cd /home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dlcgold/Documenti/tnds/lezione7/esercizio /home/dlcgold/Documenti/tnds/lezione7/esercizio /home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug /home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug /home/dlcgold/Documenti/tnds/lezione7/esercizio/cmake-build-debug/CMakeFiles/esercizio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/esercizio.dir/depend

