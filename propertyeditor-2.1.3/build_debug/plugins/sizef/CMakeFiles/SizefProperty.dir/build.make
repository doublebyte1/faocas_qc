# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joana/git/faocas_qc/propertyeditor-2.1.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug

# Include any dependencies generated for this target.
include plugins/sizef/CMakeFiles/SizefProperty.dir/depend.make

# Include the progress variables for this target.
include plugins/sizef/CMakeFiles/SizefProperty.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/sizef/CMakeFiles/SizefProperty.dir/flags.make

plugins/sizef/moc_sizef.cxx: ../plugins/sizef/sizef.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_sizef.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/debug/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef/moc_sizef.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/sizef/sizef.h

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o: plugins/sizef/CMakeFiles/SizefProperty.dir/flags.make
plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o: ../plugins/sizef/sizef.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SizefProperty.dir/sizef.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/sizef/sizef.cpp

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SizefProperty.dir/sizef.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/sizef/sizef.cpp > CMakeFiles/SizefProperty.dir/sizef.cpp.i

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SizefProperty.dir/sizef.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/sizef/sizef.cpp -o CMakeFiles/SizefProperty.dir/sizef.cpp.s

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.requires:
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.requires

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.provides: plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.requires
	$(MAKE) -f plugins/sizef/CMakeFiles/SizefProperty.dir/build.make plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.provides.build
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.provides

plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.provides.build: plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o: plugins/sizef/CMakeFiles/SizefProperty.dir/flags.make
plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o: plugins/sizef/moc_sizef.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef/moc_sizef.cxx

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SizefProperty.dir/moc_sizef.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef/moc_sizef.cxx > CMakeFiles/SizefProperty.dir/moc_sizef.cxx.i

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SizefProperty.dir/moc_sizef.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef/moc_sizef.cxx -o CMakeFiles/SizefProperty.dir/moc_sizef.cxx.s

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.requires:
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.requires

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.provides: plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.requires
	$(MAKE) -f plugins/sizef/CMakeFiles/SizefProperty.dir/build.make plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.provides.build
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.provides

plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.provides.build: plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o

# Object files for target SizefProperty
SizefProperty_OBJECTS = \
"CMakeFiles/SizefProperty.dir/sizef.cpp.o" \
"CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o"

# External object files for target SizefProperty
SizefProperty_EXTERNAL_OBJECTS =

plugins/sizef/libSizefProperty.so: plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o
plugins/sizef/libSizefProperty.so: plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o
plugins/sizef/libSizefProperty.so: plugins/sizef/CMakeFiles/SizefProperty.dir/build.make
plugins/sizef/libSizefProperty.so: lib/libPropertyEditor.so.2.1.3
plugins/sizef/libSizefProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/sizef/libSizefProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/sizef/libSizefProperty.so: plugins/sizef/CMakeFiles/SizefProperty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libSizefProperty.so"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SizefProperty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/sizef/CMakeFiles/SizefProperty.dir/build: plugins/sizef/libSizefProperty.so
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/build

plugins/sizef/CMakeFiles/SizefProperty.dir/requires: plugins/sizef/CMakeFiles/SizefProperty.dir/sizef.cpp.o.requires
plugins/sizef/CMakeFiles/SizefProperty.dir/requires: plugins/sizef/CMakeFiles/SizefProperty.dir/moc_sizef.cxx.o.requires
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/requires

plugins/sizef/CMakeFiles/SizefProperty.dir/clean:
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef && $(CMAKE_COMMAND) -P CMakeFiles/SizefProperty.dir/cmake_clean.cmake
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/clean

plugins/sizef/CMakeFiles/SizefProperty.dir/depend: plugins/sizef/moc_sizef.cxx
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/propertyeditor-2.1.3 /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/sizef /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/sizef/CMakeFiles/SizefProperty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/sizef/CMakeFiles/SizefProperty.dir/depend

