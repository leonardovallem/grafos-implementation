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
CMAKE_SOURCE_DIR = "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Grafos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Grafos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Grafos.dir/flags.make

CMakeFiles/Grafos.dir/Graph.cpp.o: CMakeFiles/Grafos.dir/flags.make
CMakeFiles/Grafos.dir/Graph.cpp.o: ../Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Grafos.dir/Graph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Grafos.dir/Graph.cpp.o -c "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Graph.cpp"

CMakeFiles/Grafos.dir/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafos.dir/Graph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Graph.cpp" > CMakeFiles/Grafos.dir/Graph.cpp.i

CMakeFiles/Grafos.dir/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafos.dir/Graph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Graph.cpp" -o CMakeFiles/Grafos.dir/Graph.cpp.s

CMakeFiles/Grafos.dir/VerticesList.cpp.o: CMakeFiles/Grafos.dir/flags.make
CMakeFiles/Grafos.dir/VerticesList.cpp.o: ../VerticesList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Grafos.dir/VerticesList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Grafos.dir/VerticesList.cpp.o -c "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/VerticesList.cpp"

CMakeFiles/Grafos.dir/VerticesList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafos.dir/VerticesList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/VerticesList.cpp" > CMakeFiles/Grafos.dir/VerticesList.cpp.i

CMakeFiles/Grafos.dir/VerticesList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafos.dir/VerticesList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/VerticesList.cpp" -o CMakeFiles/Grafos.dir/VerticesList.cpp.s

CMakeFiles/Grafos.dir/Vertex.cpp.o: CMakeFiles/Grafos.dir/flags.make
CMakeFiles/Grafos.dir/Vertex.cpp.o: ../Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Grafos.dir/Vertex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Grafos.dir/Vertex.cpp.o -c "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Vertex.cpp"

CMakeFiles/Grafos.dir/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafos.dir/Vertex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Vertex.cpp" > CMakeFiles/Grafos.dir/Vertex.cpp.i

CMakeFiles/Grafos.dir/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafos.dir/Vertex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Vertex.cpp" -o CMakeFiles/Grafos.dir/Vertex.cpp.s

CMakeFiles/Grafos.dir/Relation.cpp.o: CMakeFiles/Grafos.dir/flags.make
CMakeFiles/Grafos.dir/Relation.cpp.o: ../Relation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Grafos.dir/Relation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Grafos.dir/Relation.cpp.o -c "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Relation.cpp"

CMakeFiles/Grafos.dir/Relation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafos.dir/Relation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Relation.cpp" > CMakeFiles/Grafos.dir/Relation.cpp.i

CMakeFiles/Grafos.dir/Relation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafos.dir/Relation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/Relation.cpp" -o CMakeFiles/Grafos.dir/Relation.cpp.s

CMakeFiles/Grafos.dir/main.cpp.o: CMakeFiles/Grafos.dir/flags.make
CMakeFiles/Grafos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Grafos.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Grafos.dir/main.cpp.o -c "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/main.cpp"

CMakeFiles/Grafos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/main.cpp" > CMakeFiles/Grafos.dir/main.cpp.i

CMakeFiles/Grafos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/main.cpp" -o CMakeFiles/Grafos.dir/main.cpp.s

# Object files for target Grafos
Grafos_OBJECTS = \
"CMakeFiles/Grafos.dir/Graph.cpp.o" \
"CMakeFiles/Grafos.dir/VerticesList.cpp.o" \
"CMakeFiles/Grafos.dir/Vertex.cpp.o" \
"CMakeFiles/Grafos.dir/Relation.cpp.o" \
"CMakeFiles/Grafos.dir/main.cpp.o"

# External object files for target Grafos
Grafos_EXTERNAL_OBJECTS =

Grafos: CMakeFiles/Grafos.dir/Graph.cpp.o
Grafos: CMakeFiles/Grafos.dir/VerticesList.cpp.o
Grafos: CMakeFiles/Grafos.dir/Vertex.cpp.o
Grafos: CMakeFiles/Grafos.dir/Relation.cpp.o
Grafos: CMakeFiles/Grafos.dir/main.cpp.o
Grafos: CMakeFiles/Grafos.dir/build.make
Grafos: CMakeFiles/Grafos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Grafos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Grafos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Grafos.dir/build: Grafos

.PHONY : CMakeFiles/Grafos.dir/build

CMakeFiles/Grafos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Grafos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Grafos.dir/clean

CMakeFiles/Grafos.dir/depend:
	cd "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp" "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp" "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug" "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug" "/mnt/c/Users/leomv/Desktop/PUC/4º Período/Grafos/implementation/ndnp/cmake-build-debug/CMakeFiles/Grafos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Grafos.dir/depend
