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
include plugins/size/CMakeFiles/SizeProperty.dir/depend.make

# Include the progress variables for this target.
include plugins/size/CMakeFiles/SizeProperty.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/size/CMakeFiles/SizeProperty.dir/flags.make

plugins/size/moc_size.cxx: ../plugins/size/size.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_size.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/debug/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size/moc_size.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/size/size.h

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o: plugins/size/CMakeFiles/SizeProperty.dir/flags.make
plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o: ../plugins/size/size.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SizeProperty.dir/size.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/size/size.cpp

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SizeProperty.dir/size.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/size/size.cpp > CMakeFiles/SizeProperty.dir/size.cpp.i

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SizeProperty.dir/size.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/size/size.cpp -o CMakeFiles/SizeProperty.dir/size.cpp.s

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.requires:
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.requires

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.provides: plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.requires
	$(MAKE) -f plugins/size/CMakeFiles/SizeProperty.dir/build.make plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.provides.build
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.provides

plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.provides.build: plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o: plugins/size/CMakeFiles/SizeProperty.dir/flags.make
plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o: plugins/size/moc_size.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SizeProperty.dir/moc_size.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size/moc_size.cxx

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SizeProperty.dir/moc_size.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size/moc_size.cxx > CMakeFiles/SizeProperty.dir/moc_size.cxx.i

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SizeProperty.dir/moc_size.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size/moc_size.cxx -o CMakeFiles/SizeProperty.dir/moc_size.cxx.s

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.requires:
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.requires

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.provides: plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.requires
	$(MAKE) -f plugins/size/CMakeFiles/SizeProperty.dir/build.make plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.provides.build
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.provides

plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.provides.build: plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o

# Object files for target SizeProperty
SizeProperty_OBJECTS = \
"CMakeFiles/SizeProperty.dir/size.cpp.o" \
"CMakeFiles/SizeProperty.dir/moc_size.cxx.o"

# External object files for target SizeProperty
SizeProperty_EXTERNAL_OBJECTS =

plugins/size/libSizeProperty.so: plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o
plugins/size/libSizeProperty.so: plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o
plugins/size/libSizeProperty.so: plugins/size/CMakeFiles/SizeProperty.dir/build.make
plugins/size/libSizeProperty.so: lib/libPropertyEditor.so.2.1.3
plugins/size/libSizeProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/size/libSizeProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/size/libSizeProperty.so: plugins/size/CMakeFiles/SizeProperty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libSizeProperty.so"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SizeProperty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/size/CMakeFiles/SizeProperty.dir/build: plugins/size/libSizeProperty.so
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/build

plugins/size/CMakeFiles/SizeProperty.dir/requires: plugins/size/CMakeFiles/SizeProperty.dir/size.cpp.o.requires
plugins/size/CMakeFiles/SizeProperty.dir/requires: plugins/size/CMakeFiles/SizeProperty.dir/moc_size.cxx.o.requires
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/requires

plugins/size/CMakeFiles/SizeProperty.dir/clean:
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size && $(CMAKE_COMMAND) -P CMakeFiles/SizeProperty.dir/cmake_clean.cmake
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/clean

plugins/size/CMakeFiles/SizeProperty.dir/depend: plugins/size/moc_size.cxx
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/propertyeditor-2.1.3 /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/size /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_debug/plugins/size/CMakeFiles/SizeProperty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/size/CMakeFiles/SizeProperty.dir/depend

