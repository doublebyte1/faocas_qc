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
CMAKE_SOURCE_DIR = /home/joana/git/faocas_qc/exaro_2.0.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joana/git/faocas_qc/exaro_2.0.0/build_release

# Include any dependencies generated for this target.
include plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/depend.make

# Include the progress variables for this target.
include plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/flags.make

plugins/report/items/rectangle/moc_rectangle.cxx: ../plugins/report/items/rectangle/rectangle.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_rectangle.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build_release -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/release/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/moc_rectangle.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle/rectangle.h

plugins/report/items/rectangle/qrc_rectangle.cxx: ../plugins/report/items/rectangle/rectangle.png
plugins/report/items/rectangle/qrc_rectangle.cxx: plugins/report/items/rectangle/rectangle.qrc.depends
plugins/report/items/rectangle/qrc_rectangle.cxx: ../plugins/report/items/rectangle/rectangle.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_rectangle.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name rectangle -o /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/qrc_rectangle.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle/rectangle.qrc

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/flags.make
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o: ../plugins/report/items/rectangle/rectangle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Rectangle.dir/rectangle.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle/rectangle.cpp

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rectangle.dir/rectangle.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle/rectangle.cpp > CMakeFiles/Rectangle.dir/rectangle.cpp.i

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rectangle.dir/rectangle.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle/rectangle.cpp -o CMakeFiles/Rectangle.dir/rectangle.cpp.s

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.requires:
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.requires

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.provides: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.requires
	$(MAKE) -f plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build.make plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.provides.build
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.provides

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.provides.build: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/flags.make
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o: plugins/report/items/rectangle/moc_rectangle.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/moc_rectangle.cxx

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rectangle.dir/moc_rectangle.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/moc_rectangle.cxx > CMakeFiles/Rectangle.dir/moc_rectangle.cxx.i

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rectangle.dir/moc_rectangle.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/moc_rectangle.cxx -o CMakeFiles/Rectangle.dir/moc_rectangle.cxx.s

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.requires:
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.requires

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.provides: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.requires
	$(MAKE) -f plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build.make plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.provides.build
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.provides

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.provides.build: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/flags.make
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o: plugins/report/items/rectangle/qrc_rectangle.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/qrc_rectangle.cxx

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/qrc_rectangle.cxx > CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.i

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/qrc_rectangle.cxx -o CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.s

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.requires:
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.requires

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.provides: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.requires
	$(MAKE) -f plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build.make plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.provides.build
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.provides

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.provides.build: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o

# Object files for target Rectangle
Rectangle_OBJECTS = \
"CMakeFiles/Rectangle.dir/rectangle.cpp.o" \
"CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o" \
"CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o"

# External object files for target Rectangle
Rectangle_EXTERNAL_OBJECTS =

plugins/report/items/rectangle/libRectangle.so: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o
plugins/report/items/rectangle/libRectangle.so: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o
plugins/report/items/rectangle/libRectangle.so: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o
plugins/report/items/rectangle/libRectangle.so: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build.make
plugins/report/items/rectangle/libRectangle.so: libs/report/libReport.so.2.0.0
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/items/rectangle/libRectangle.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/items/rectangle/libRectangle.so: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libRectangle.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rectangle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build: plugins/report/items/rectangle/libRectangle.so
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/build

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/requires: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/rectangle.cpp.o.requires
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/requires: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/moc_rectangle.cxx.o.requires
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/requires: plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/qrc_rectangle.cxx.o.requires
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/requires

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle && $(CMAKE_COMMAND) -P CMakeFiles/Rectangle.dir/cmake_clean.cmake
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/clean

plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/depend: plugins/report/items/rectangle/moc_rectangle.cxx
plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/depend: plugins/report/items/rectangle/qrc_rectangle.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/rectangle /home/joana/git/faocas_qc/exaro_2.0.0/build_release /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/items/rectangle/CMakeFiles/Rectangle.dir/depend

