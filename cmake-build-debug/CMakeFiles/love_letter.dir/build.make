# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/edward/clion/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/edward/clion/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/edward/CLionProjects/love_letter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edward/CLionProjects/love_letter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/love_letter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/love_letter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/love_letter.dir/flags.make

CMakeFiles/love_letter.dir/main.cc.o: CMakeFiles/love_letter.dir/flags.make
CMakeFiles/love_letter.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/love_letter.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/love_letter.dir/main.cc.o -c /home/edward/CLionProjects/love_letter/main.cc

CMakeFiles/love_letter.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/love_letter.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edward/CLionProjects/love_letter/main.cc > CMakeFiles/love_letter.dir/main.cc.i

CMakeFiles/love_letter.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/love_letter.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edward/CLionProjects/love_letter/main.cc -o CMakeFiles/love_letter.dir/main.cc.s

CMakeFiles/love_letter.dir/main.cc.o.requires:

.PHONY : CMakeFiles/love_letter.dir/main.cc.o.requires

CMakeFiles/love_letter.dir/main.cc.o.provides: CMakeFiles/love_letter.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/love_letter.dir/build.make CMakeFiles/love_letter.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/love_letter.dir/main.cc.o.provides

CMakeFiles/love_letter.dir/main.cc.o.provides.build: CMakeFiles/love_letter.dir/main.cc.o


CMakeFiles/love_letter.dir/card.cc.o: CMakeFiles/love_letter.dir/flags.make
CMakeFiles/love_letter.dir/card.cc.o: ../card.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/love_letter.dir/card.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/love_letter.dir/card.cc.o -c /home/edward/CLionProjects/love_letter/card.cc

CMakeFiles/love_letter.dir/card.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/love_letter.dir/card.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edward/CLionProjects/love_letter/card.cc > CMakeFiles/love_letter.dir/card.cc.i

CMakeFiles/love_letter.dir/card.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/love_letter.dir/card.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edward/CLionProjects/love_letter/card.cc -o CMakeFiles/love_letter.dir/card.cc.s

CMakeFiles/love_letter.dir/card.cc.o.requires:

.PHONY : CMakeFiles/love_letter.dir/card.cc.o.requires

CMakeFiles/love_letter.dir/card.cc.o.provides: CMakeFiles/love_letter.dir/card.cc.o.requires
	$(MAKE) -f CMakeFiles/love_letter.dir/build.make CMakeFiles/love_letter.dir/card.cc.o.provides.build
.PHONY : CMakeFiles/love_letter.dir/card.cc.o.provides

CMakeFiles/love_letter.dir/card.cc.o.provides.build: CMakeFiles/love_letter.dir/card.cc.o


CMakeFiles/love_letter.dir/player.cc.o: CMakeFiles/love_letter.dir/flags.make
CMakeFiles/love_letter.dir/player.cc.o: ../player.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/love_letter.dir/player.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/love_letter.dir/player.cc.o -c /home/edward/CLionProjects/love_letter/player.cc

CMakeFiles/love_letter.dir/player.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/love_letter.dir/player.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edward/CLionProjects/love_letter/player.cc > CMakeFiles/love_letter.dir/player.cc.i

CMakeFiles/love_letter.dir/player.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/love_letter.dir/player.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edward/CLionProjects/love_letter/player.cc -o CMakeFiles/love_letter.dir/player.cc.s

CMakeFiles/love_letter.dir/player.cc.o.requires:

.PHONY : CMakeFiles/love_letter.dir/player.cc.o.requires

CMakeFiles/love_letter.dir/player.cc.o.provides: CMakeFiles/love_letter.dir/player.cc.o.requires
	$(MAKE) -f CMakeFiles/love_letter.dir/build.make CMakeFiles/love_letter.dir/player.cc.o.provides.build
.PHONY : CMakeFiles/love_letter.dir/player.cc.o.provides

CMakeFiles/love_letter.dir/player.cc.o.provides.build: CMakeFiles/love_letter.dir/player.cc.o


CMakeFiles/love_letter.dir/game.cc.o: CMakeFiles/love_letter.dir/flags.make
CMakeFiles/love_letter.dir/game.cc.o: ../game.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/love_letter.dir/game.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/love_letter.dir/game.cc.o -c /home/edward/CLionProjects/love_letter/game.cc

CMakeFiles/love_letter.dir/game.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/love_letter.dir/game.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edward/CLionProjects/love_letter/game.cc > CMakeFiles/love_letter.dir/game.cc.i

CMakeFiles/love_letter.dir/game.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/love_letter.dir/game.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edward/CLionProjects/love_letter/game.cc -o CMakeFiles/love_letter.dir/game.cc.s

CMakeFiles/love_letter.dir/game.cc.o.requires:

.PHONY : CMakeFiles/love_letter.dir/game.cc.o.requires

CMakeFiles/love_letter.dir/game.cc.o.provides: CMakeFiles/love_letter.dir/game.cc.o.requires
	$(MAKE) -f CMakeFiles/love_letter.dir/build.make CMakeFiles/love_letter.dir/game.cc.o.provides.build
.PHONY : CMakeFiles/love_letter.dir/game.cc.o.provides

CMakeFiles/love_letter.dir/game.cc.o.provides.build: CMakeFiles/love_letter.dir/game.cc.o


# Object files for target love_letter
love_letter_OBJECTS = \
"CMakeFiles/love_letter.dir/main.cc.o" \
"CMakeFiles/love_letter.dir/card.cc.o" \
"CMakeFiles/love_letter.dir/player.cc.o" \
"CMakeFiles/love_letter.dir/game.cc.o"

# External object files for target love_letter
love_letter_EXTERNAL_OBJECTS =

love_letter: CMakeFiles/love_letter.dir/main.cc.o
love_letter: CMakeFiles/love_letter.dir/card.cc.o
love_letter: CMakeFiles/love_letter.dir/player.cc.o
love_letter: CMakeFiles/love_letter.dir/game.cc.o
love_letter: CMakeFiles/love_letter.dir/build.make
love_letter: CMakeFiles/love_letter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable love_letter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/love_letter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/love_letter.dir/build: love_letter

.PHONY : CMakeFiles/love_letter.dir/build

CMakeFiles/love_letter.dir/requires: CMakeFiles/love_letter.dir/main.cc.o.requires
CMakeFiles/love_letter.dir/requires: CMakeFiles/love_letter.dir/card.cc.o.requires
CMakeFiles/love_letter.dir/requires: CMakeFiles/love_letter.dir/player.cc.o.requires
CMakeFiles/love_letter.dir/requires: CMakeFiles/love_letter.dir/game.cc.o.requires

.PHONY : CMakeFiles/love_letter.dir/requires

CMakeFiles/love_letter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/love_letter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/love_letter.dir/clean

CMakeFiles/love_letter.dir/depend:
	cd /home/edward/CLionProjects/love_letter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edward/CLionProjects/love_letter /home/edward/CLionProjects/love_letter /home/edward/CLionProjects/love_letter/cmake-build-debug /home/edward/CLionProjects/love_letter/cmake-build-debug /home/edward/CLionProjects/love_letter/cmake-build-debug/CMakeFiles/love_letter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/love_letter.dir/depend
