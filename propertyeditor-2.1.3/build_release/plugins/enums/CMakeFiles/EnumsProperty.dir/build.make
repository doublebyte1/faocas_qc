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
CMAKE_BINARY_DIR = /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release

# Include any dependencies generated for this target.
include plugins/enums/CMakeFiles/EnumsProperty.dir/depend.make

# Include the progress variables for this target.
include plugins/enums/CMakeFiles/EnumsProperty.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/enums/CMakeFiles/EnumsProperty.dir/flags.make

plugins/enums/moc_enums.cxx: ../plugins/enums/enums.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_enums.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/release/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums/moc_enums.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/enums/enums.h

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o: plugins/enums/CMakeFiles/EnumsProperty.dir/flags.make
plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o: ../plugins/enums/enums.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/EnumsProperty.dir/enums.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/enums/enums.cpp

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EnumsProperty.dir/enums.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/enums/enums.cpp > CMakeFiles/EnumsProperty.dir/enums.cpp.i

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EnumsProperty.dir/enums.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/enums/enums.cpp -o CMakeFiles/EnumsProperty.dir/enums.cpp.s

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.requires:
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.requires

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.provides: plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.requires
	$(MAKE) -f plugins/enums/CMakeFiles/EnumsProperty.dir/build.make plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.provides.build
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.provides

plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.provides.build: plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o: plugins/enums/CMakeFiles/EnumsProperty.dir/flags.make
plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o: plugins/enums/moc_enums.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums/moc_enums.cxx

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EnumsProperty.dir/moc_enums.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums/moc_enums.cxx > CMakeFiles/EnumsProperty.dir/moc_enums.cxx.i

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EnumsProperty.dir/moc_enums.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums/moc_enums.cxx -o CMakeFiles/EnumsProperty.dir/moc_enums.cxx.s

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.requires:
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.requires

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.provides: plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.requires
	$(MAKE) -f plugins/enums/CMakeFiles/EnumsProperty.dir/build.make plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.provides.build
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.provides

plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.provides.build: plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o

# Object files for target EnumsProperty
EnumsProperty_OBJECTS = \
"CMakeFiles/EnumsProperty.dir/enums.cpp.o" \
"CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o"

# External object files for target EnumsProperty
EnumsProperty_EXTERNAL_OBJECTS =

plugins/enums/libEnumsProperty.so: plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o
plugins/enums/libEnumsProperty.so: plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o
plugins/enums/libEnumsProperty.so: plugins/enums/CMakeFiles/EnumsProperty.dir/build.make
plugins/enums/libEnumsProperty.so: lib/libPropertyEditor.so.2.1.3
plugins/enums/libEnumsProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/enums/libEnumsProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/enums/libEnumsProperty.so: plugins/enums/CMakeFiles/EnumsProperty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libEnumsProperty.so"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EnumsProperty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/enums/CMakeFiles/EnumsProperty.dir/build: plugins/enums/libEnumsProperty.so
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/build

plugins/enums/CMakeFiles/EnumsProperty.dir/requires: plugins/enums/CMakeFiles/EnumsProperty.dir/enums.cpp.o.requires
plugins/enums/CMakeFiles/EnumsProperty.dir/requires: plugins/enums/CMakeFiles/EnumsProperty.dir/moc_enums.cxx.o.requires
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/requires

plugins/enums/CMakeFiles/EnumsProperty.dir/clean:
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums && $(CMAKE_COMMAND) -P CMakeFiles/EnumsProperty.dir/cmake_clean.cmake
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/clean

plugins/enums/CMakeFiles/EnumsProperty.dir/depend: plugins/enums/moc_enums.cxx
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/propertyeditor-2.1.3 /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/enums /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/enums/CMakeFiles/EnumsProperty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/enums/CMakeFiles/EnumsProperty.dir/depend

