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
include plugins/dateTime/CMakeFiles/DateTimeProperty.dir/depend.make

# Include the progress variables for this target.
include plugins/dateTime/CMakeFiles/DateTimeProperty.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/dateTime/CMakeFiles/DateTimeProperty.dir/flags.make

plugins/dateTime/moc_datetime.cxx: ../plugins/dateTime/datetime.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_datetime.cxx"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/lib -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/propertyeditor-2.1.3 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release -DPROPERTYEDITOR_VERSION=\"2.1.3\" -DQT_GUI_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/propertyeditor/release/lib\" -o /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime/moc_datetime.cxx /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/dateTime/datetime.h

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/flags.make
plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o: ../plugins/dateTime/datetime.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/DateTimeProperty.dir/datetime.cpp.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/dateTime/datetime.cpp

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DateTimeProperty.dir/datetime.cpp.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/dateTime/datetime.cpp > CMakeFiles/DateTimeProperty.dir/datetime.cpp.i

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DateTimeProperty.dir/datetime.cpp.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/dateTime/datetime.cpp -o CMakeFiles/DateTimeProperty.dir/datetime.cpp.s

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.requires:
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.requires

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.provides: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.requires
	$(MAKE) -f plugins/dateTime/CMakeFiles/DateTimeProperty.dir/build.make plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.provides.build
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.provides

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.provides.build: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/flags.make
plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o: plugins/dateTime/moc_datetime.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o -c /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime/moc_datetime.cxx

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.i"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime/moc_datetime.cxx > CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.i

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.s"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime/moc_datetime.cxx -o CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.s

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.requires:
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.requires

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.provides: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.requires
	$(MAKE) -f plugins/dateTime/CMakeFiles/DateTimeProperty.dir/build.make plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.provides.build
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.provides

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.provides.build: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o

# Object files for target DateTimeProperty
DateTimeProperty_OBJECTS = \
"CMakeFiles/DateTimeProperty.dir/datetime.cpp.o" \
"CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o"

# External object files for target DateTimeProperty
DateTimeProperty_EXTERNAL_OBJECTS =

plugins/dateTime/libDateTimeProperty.so: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o
plugins/dateTime/libDateTimeProperty.so: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o
plugins/dateTime/libDateTimeProperty.so: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/build.make
plugins/dateTime/libDateTimeProperty.so: lib/libPropertyEditor.so.2.1.3
plugins/dateTime/libDateTimeProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/dateTime/libDateTimeProperty.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/dateTime/libDateTimeProperty.so: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libDateTimeProperty.so"
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DateTimeProperty.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/dateTime/CMakeFiles/DateTimeProperty.dir/build: plugins/dateTime/libDateTimeProperty.so
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/build

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/requires: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/datetime.cpp.o.requires
plugins/dateTime/CMakeFiles/DateTimeProperty.dir/requires: plugins/dateTime/CMakeFiles/DateTimeProperty.dir/moc_datetime.cxx.o.requires
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/requires

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/clean:
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime && $(CMAKE_COMMAND) -P CMakeFiles/DateTimeProperty.dir/cmake_clean.cmake
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/clean

plugins/dateTime/CMakeFiles/DateTimeProperty.dir/depend: plugins/dateTime/moc_datetime.cxx
	cd /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/propertyeditor-2.1.3 /home/joana/git/faocas_qc/propertyeditor-2.1.3/plugins/dateTime /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime /home/joana/git/faocas_qc/propertyeditor-2.1.3/build_release/plugins/dateTime/CMakeFiles/DateTimeProperty.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/dateTime/CMakeFiles/DateTimeProperty.dir/depend

