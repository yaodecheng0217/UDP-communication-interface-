# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /media/ydc/DATA/Docnment/Desktop/ceshi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/ydc/DATA/Docnment/Desktop/ceshi/build

# Include any dependencies generated for this target.
include CMakeFiles/AGV.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AGV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AGV.dir/flags.make

CMakeFiles/AGV.dir/main.cpp.o: CMakeFiles/AGV.dir/flags.make
CMakeFiles/AGV.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AGV.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AGV.dir/main.cpp.o -c /media/ydc/DATA/Docnment/Desktop/ceshi/main.cpp

CMakeFiles/AGV.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AGV.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/ydc/DATA/Docnment/Desktop/ceshi/main.cpp > CMakeFiles/AGV.dir/main.cpp.i

CMakeFiles/AGV.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AGV.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/ydc/DATA/Docnment/Desktop/ceshi/main.cpp -o CMakeFiles/AGV.dir/main.cpp.s

CMakeFiles/AGV.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AGV.dir/main.cpp.o.requires

CMakeFiles/AGV.dir/main.cpp.o.provides: CMakeFiles/AGV.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AGV.dir/build.make CMakeFiles/AGV.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AGV.dir/main.cpp.o.provides

CMakeFiles/AGV.dir/main.cpp.o.provides.build: CMakeFiles/AGV.dir/main.cpp.o


CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o: CMakeFiles/AGV.dir/flags.make
CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o: ../src/ProtocolAnalysis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o -c /media/ydc/DATA/Docnment/Desktop/ceshi/src/ProtocolAnalysis.cpp

CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/ydc/DATA/Docnment/Desktop/ceshi/src/ProtocolAnalysis.cpp > CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.i

CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/ydc/DATA/Docnment/Desktop/ceshi/src/ProtocolAnalysis.cpp -o CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.s

CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.requires:

.PHONY : CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.requires

CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.provides: CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.requires
	$(MAKE) -f CMakeFiles/AGV.dir/build.make CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.provides.build
.PHONY : CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.provides

CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.provides.build: CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o


CMakeFiles/AGV.dir/src/UdpMessage.cpp.o: CMakeFiles/AGV.dir/flags.make
CMakeFiles/AGV.dir/src/UdpMessage.cpp.o: ../src/UdpMessage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AGV.dir/src/UdpMessage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AGV.dir/src/UdpMessage.cpp.o -c /media/ydc/DATA/Docnment/Desktop/ceshi/src/UdpMessage.cpp

CMakeFiles/AGV.dir/src/UdpMessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AGV.dir/src/UdpMessage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/ydc/DATA/Docnment/Desktop/ceshi/src/UdpMessage.cpp > CMakeFiles/AGV.dir/src/UdpMessage.cpp.i

CMakeFiles/AGV.dir/src/UdpMessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AGV.dir/src/UdpMessage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/ydc/DATA/Docnment/Desktop/ceshi/src/UdpMessage.cpp -o CMakeFiles/AGV.dir/src/UdpMessage.cpp.s

CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.requires:

.PHONY : CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.requires

CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.provides: CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.requires
	$(MAKE) -f CMakeFiles/AGV.dir/build.make CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.provides.build
.PHONY : CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.provides

CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.provides.build: CMakeFiles/AGV.dir/src/UdpMessage.cpp.o


CMakeFiles/AGV.dir/src/thread_base.cpp.o: CMakeFiles/AGV.dir/flags.make
CMakeFiles/AGV.dir/src/thread_base.cpp.o: ../src/thread_base.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AGV.dir/src/thread_base.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AGV.dir/src/thread_base.cpp.o -c /media/ydc/DATA/Docnment/Desktop/ceshi/src/thread_base.cpp

CMakeFiles/AGV.dir/src/thread_base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AGV.dir/src/thread_base.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/ydc/DATA/Docnment/Desktop/ceshi/src/thread_base.cpp > CMakeFiles/AGV.dir/src/thread_base.cpp.i

CMakeFiles/AGV.dir/src/thread_base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AGV.dir/src/thread_base.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/ydc/DATA/Docnment/Desktop/ceshi/src/thread_base.cpp -o CMakeFiles/AGV.dir/src/thread_base.cpp.s

CMakeFiles/AGV.dir/src/thread_base.cpp.o.requires:

.PHONY : CMakeFiles/AGV.dir/src/thread_base.cpp.o.requires

CMakeFiles/AGV.dir/src/thread_base.cpp.o.provides: CMakeFiles/AGV.dir/src/thread_base.cpp.o.requires
	$(MAKE) -f CMakeFiles/AGV.dir/build.make CMakeFiles/AGV.dir/src/thread_base.cpp.o.provides.build
.PHONY : CMakeFiles/AGV.dir/src/thread_base.cpp.o.provides

CMakeFiles/AGV.dir/src/thread_base.cpp.o.provides.build: CMakeFiles/AGV.dir/src/thread_base.cpp.o


# Object files for target AGV
AGV_OBJECTS = \
"CMakeFiles/AGV.dir/main.cpp.o" \
"CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o" \
"CMakeFiles/AGV.dir/src/UdpMessage.cpp.o" \
"CMakeFiles/AGV.dir/src/thread_base.cpp.o"

# External object files for target AGV
AGV_EXTERNAL_OBJECTS =

AGV: CMakeFiles/AGV.dir/main.cpp.o
AGV: CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o
AGV: CMakeFiles/AGV.dir/src/UdpMessage.cpp.o
AGV: CMakeFiles/AGV.dir/src/thread_base.cpp.o
AGV: CMakeFiles/AGV.dir/build.make
AGV: CMakeFiles/AGV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable AGV"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AGV.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AGV.dir/build: AGV

.PHONY : CMakeFiles/AGV.dir/build

CMakeFiles/AGV.dir/requires: CMakeFiles/AGV.dir/main.cpp.o.requires
CMakeFiles/AGV.dir/requires: CMakeFiles/AGV.dir/src/ProtocolAnalysis.cpp.o.requires
CMakeFiles/AGV.dir/requires: CMakeFiles/AGV.dir/src/UdpMessage.cpp.o.requires
CMakeFiles/AGV.dir/requires: CMakeFiles/AGV.dir/src/thread_base.cpp.o.requires

.PHONY : CMakeFiles/AGV.dir/requires

CMakeFiles/AGV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AGV.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AGV.dir/clean

CMakeFiles/AGV.dir/depend:
	cd /media/ydc/DATA/Docnment/Desktop/ceshi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/ydc/DATA/Docnment/Desktop/ceshi /media/ydc/DATA/Docnment/Desktop/ceshi /media/ydc/DATA/Docnment/Desktop/ceshi/build /media/ydc/DATA/Docnment/Desktop/ceshi/build /media/ydc/DATA/Docnment/Desktop/ceshi/build/CMakeFiles/AGV.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AGV.dir/depend
