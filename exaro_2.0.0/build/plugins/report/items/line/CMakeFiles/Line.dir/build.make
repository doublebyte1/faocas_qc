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
CMAKE_BINARY_DIR = /home/joana/git/faocas_qc/exaro_2.0.0/build

# Include any dependencies generated for this target.
include plugins/report/items/line/CMakeFiles/Line.dir/depend.make

# Include the progress variables for this target.
include plugins/report/items/line/CMakeFiles/Line.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/items/line/CMakeFiles/Line.dir/flags.make

plugins/report/items/line/moc_line.cxx: ../plugins/report/items/line/line.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_line.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/moc_line.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line/line.h

plugins/report/items/line/qrc_line.cxx: ../plugins/report/items/line/line.png
plugins/report/items/line/qrc_line.cxx: plugins/report/items/line/line.qrc.depends
plugins/report/items/line/qrc_line.cxx: ../plugins/report/items/line/line.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_line.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name line -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/qrc_line.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line/line.qrc

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o: plugins/report/items/line/CMakeFiles/Line.dir/flags.make
plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o: ../plugins/report/items/line/line.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Line.dir/line.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line/line.cpp

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Line.dir/line.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line/line.cpp > CMakeFiles/Line.dir/line.cpp.i

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Line.dir/line.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line/line.cpp -o CMakeFiles/Line.dir/line.cpp.s

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.requires:
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.requires

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.provides: plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.requires
	$(MAKE) -f plugins/report/items/line/CMakeFiles/Line.dir/build.make plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.provides.build
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.provides

plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.provides.build: plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o: plugins/report/items/line/CMakeFiles/Line.dir/flags.make
plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o: plugins/report/items/line/moc_line.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Line.dir/moc_line.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/moc_line.cxx

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Line.dir/moc_line.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/moc_line.cxx > CMakeFiles/Line.dir/moc_line.cxx.i

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Line.dir/moc_line.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/moc_line.cxx -o CMakeFiles/Line.dir/moc_line.cxx.s

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.requires:
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.requires

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.provides: plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.requires
	$(MAKE) -f plugins/report/items/line/CMakeFiles/Line.dir/build.make plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.provides.build
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.provides

plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.provides.build: plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o: plugins/report/items/line/CMakeFiles/Line.dir/flags.make
plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o: plugins/report/items/line/qrc_line.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Line.dir/qrc_line.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/qrc_line.cxx

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Line.dir/qrc_line.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/qrc_line.cxx > CMakeFiles/Line.dir/qrc_line.cxx.i

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Line.dir/qrc_line.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/qrc_line.cxx -o CMakeFiles/Line.dir/qrc_line.cxx.s

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.requires:
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.requires

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.provides: plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.requires
	$(MAKE) -f plugins/report/items/line/CMakeFiles/Line.dir/build.make plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.provides.build
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.provides

plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.provides.build: plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o

# Object files for target Line
Line_OBJECTS = \
"CMakeFiles/Line.dir/line.cpp.o" \
"CMakeFiles/Line.dir/moc_line.cxx.o" \
"CMakeFiles/Line.dir/qrc_line.cxx.o"

# External object files for target Line
Line_EXTERNAL_OBJECTS =

plugins/report/items/line/libLine.so: plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o
plugins/report/items/line/libLine.so: plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o
plugins/report/items/line/libLine.so: plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o
plugins/report/items/line/libLine.so: plugins/report/items/line/CMakeFiles/Line.dir/build.make
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/items/line/libLine.so: libs/report/libReport.so.2.0.0
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/items/line/libLine.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/items/line/libLine.so: plugins/report/items/line/CMakeFiles/Line.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libLine.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Line.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/items/line/CMakeFiles/Line.dir/build: plugins/report/items/line/libLine.so
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/build

plugins/report/items/line/CMakeFiles/Line.dir/requires: plugins/report/items/line/CMakeFiles/Line.dir/line.cpp.o.requires
plugins/report/items/line/CMakeFiles/Line.dir/requires: plugins/report/items/line/CMakeFiles/Line.dir/moc_line.cxx.o.requires
plugins/report/items/line/CMakeFiles/Line.dir/requires: plugins/report/items/line/CMakeFiles/Line.dir/qrc_line.cxx.o.requires
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/requires

plugins/report/items/line/CMakeFiles/Line.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line && $(CMAKE_COMMAND) -P CMakeFiles/Line.dir/cmake_clean.cmake
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/clean

plugins/report/items/line/CMakeFiles/Line.dir/depend: plugins/report/items/line/moc_line.cxx
plugins/report/items/line/CMakeFiles/Line.dir/depend: plugins/report/items/line/qrc_line.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/line /home/joana/git/faocas_qc/exaro_2.0.0/build /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/line/CMakeFiles/Line.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/items/line/CMakeFiles/Line.dir/depend

