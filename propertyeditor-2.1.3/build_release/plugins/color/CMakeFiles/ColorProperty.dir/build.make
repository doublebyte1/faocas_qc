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
include plugins/color/CMakeFiles/ColorProperty.dir/depend.make

# Include the progress variables for this target.
include plugins/color/CMakeFiles/ColorProperty.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/color/CMakeFiles/ColorProperty.dir/flags.make

plugins/color/moc_changecolor.cxx: ../plugins/color/changecolor.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_changecolor.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/release/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_changecolor.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/changecolor.h

plugins/color/moc_color.cxx: ../plugins/color/color.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_color.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/release/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_color.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/color.h

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o: plugins/color/CMakeFiles/ColorProperty.dir/flags.make
plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o: ../plugins/color/changecolor.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ColorProperty.dir/changecolor.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/changecolor.cpp

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ColorProperty.dir/changecolor.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/changecolor.cpp > CMakeFiles/ColorProperty.dir/changecolor.cpp.i

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ColorProperty.dir/changecolor.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/changecolor.cpp -o CMakeFiles/ColorProperty.dir/changecolor.cpp.s

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.requires:
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.requires

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.provides: plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.requires
	$(MAKE) -f plugins/color/CMakeFiles/ColorProperty.dir/build.make plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.provides.build
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.provides

plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.provides.build: plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o: plugins/color/CMakeFiles/ColorProperty.dir/flags.make
plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o: ../plugins/color/color.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ColorProperty.dir/color.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/color.cpp

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ColorProperty.dir/color.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/color.cpp > CMakeFiles/ColorProperty.dir/color.cpp.i

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ColorProperty.dir/color.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color/color.cpp -o CMakeFiles/ColorProperty.dir/color.cpp.s

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.requires:
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.requires

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.provides: plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.requires
	$(MAKE) -f plugins/color/CMakeFiles/ColorProperty.dir/build.make plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.provides.build
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.provides

plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.provides.build: plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o: plugins/color/CMakeFiles/ColorProperty.dir/flags.make
plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o: plugins/color/moc_changecolor.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_changecolor.cxx

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_changecolor.cxx > CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.i

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_changecolor.cxx -o CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.s

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.requires:
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.requires

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.provides: plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.requires
	$(MAKE) -f plugins/color/CMakeFiles/ColorProperty.dir/build.make plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.provides.build
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.provides

plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.provides.build: plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o: plugins/color/CMakeFiles/ColorProperty.dir/flags.make
plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o: plugins/color/moc_color.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/ColorProperty.dir/moc_color.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_color.cxx

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ColorProperty.dir/moc_color.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_color.cxx > CMakeFiles/ColorProperty.dir/moc_color.cxx.i

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ColorProperty.dir/moc_color.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/moc_color.cxx -o CMakeFiles/ColorProperty.dir/moc_color.cxx.s

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.requires:
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.requires

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.provides: plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.requires
	$(MAKE) -f plugins/color/CMakeFiles/ColorProperty.dir/build.make plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.provides.build
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.provides

plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.provides.build: plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o

# Object files for target ColorProperty
ColorProperty_OBJECTS = \
"CMakeFiles/ColorProperty.dir/changecolor.cpp.o" \
"CMakeFiles/ColorProperty.dir/color.cpp.o" \
"CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o" \
"CMakeFiles/ColorProperty.dir/moc_color.cxx.o"

# External object files for target ColorProperty
ColorProperty_EXTERNAL_OBJECTS =

plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o
plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o
plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o
plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o
plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/build.make
plugins/color/libColorProperty.so: lib/libPropertyEditor.so.2.1.3
plugins/color/libColorProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/color/libColorProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/color/libColorProperty.so: plugins/color/CMakeFiles/ColorProperty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libColorProperty.so"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ColorProperty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/color/CMakeFiles/ColorProperty.dir/build: plugins/color/libColorProperty.so
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/build

plugins/color/CMakeFiles/ColorProperty.dir/requires: plugins/color/CMakeFiles/ColorProperty.dir/changecolor.cpp.o.requires
plugins/color/CMakeFiles/ColorProperty.dir/requires: plugins/color/CMakeFiles/ColorProperty.dir/color.cpp.o.requires
plugins/color/CMakeFiles/ColorProperty.dir/requires: plugins/color/CMakeFiles/ColorProperty.dir/moc_changecolor.cxx.o.requires
plugins/color/CMakeFiles/ColorProperty.dir/requires: plugins/color/CMakeFiles/ColorProperty.dir/moc_color.cxx.o.requires
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/requires

plugins/color/CMakeFiles/ColorProperty.dir/clean:
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color && $(CMAKE_COMMAND) -P CMakeFiles/ColorProperty.dir/cmake_clean.cmake
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/clean

plugins/color/CMakeFiles/ColorProperty.dir/depend: plugins/color/moc_changecolor.cxx
plugins/color/CMakeFiles/ColorProperty.dir/depend: plugins/color/moc_color.cxx
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/propertyeditor-2.1.3 /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/color /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/color/CMakeFiles/ColorProperty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/color/CMakeFiles/ColorProperty.dir/depend

