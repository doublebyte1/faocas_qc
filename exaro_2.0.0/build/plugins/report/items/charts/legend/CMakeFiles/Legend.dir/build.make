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
include plugins/report/items/charts/legend/CMakeFiles/Legend.dir/depend.make

# Include the progress variables for this target.
include plugins/report/items/charts/legend/CMakeFiles/Legend.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/items/charts/legend/CMakeFiles/Legend.dir/flags.make

plugins/report/items/charts/legend/moc_legend.cxx: ../plugins/report/items/charts/legend/legend.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_legend.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/chartinterface -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/moc_legend.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend/legend.h

plugins/report/items/charts/legend/qrc_legend.cxx: ../plugins/report/items/charts/legend/legend.png
plugins/report/items/charts/legend/qrc_legend.cxx: plugins/report/items/charts/legend/legend.qrc.depends
plugins/report/items/charts/legend/qrc_legend.cxx: ../plugins/report/items/charts/legend/legend.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_legend.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name legend -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/qrc_legend.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend/legend.qrc

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/flags.make
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o: ../plugins/report/items/charts/legend/legend.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Legend.dir/legend.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend/legend.cpp

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Legend.dir/legend.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend/legend.cpp > CMakeFiles/Legend.dir/legend.cpp.i

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Legend.dir/legend.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend/legend.cpp -o CMakeFiles/Legend.dir/legend.cpp.s

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.requires:
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.requires

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.provides: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.requires
	$(MAKE) -f plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build.make plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.provides.build
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.provides

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.provides.build: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/flags.make
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o: plugins/report/items/charts/legend/moc_legend.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Legend.dir/moc_legend.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/moc_legend.cxx

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Legend.dir/moc_legend.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/moc_legend.cxx > CMakeFiles/Legend.dir/moc_legend.cxx.i

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Legend.dir/moc_legend.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/moc_legend.cxx -o CMakeFiles/Legend.dir/moc_legend.cxx.s

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.requires:
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.requires

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.provides: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.requires
	$(MAKE) -f plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build.make plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.provides.build
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.provides

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.provides.build: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/flags.make
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o: plugins/report/items/charts/legend/qrc_legend.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Legend.dir/qrc_legend.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/qrc_legend.cxx

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Legend.dir/qrc_legend.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/qrc_legend.cxx > CMakeFiles/Legend.dir/qrc_legend.cxx.i

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Legend.dir/qrc_legend.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/qrc_legend.cxx -o CMakeFiles/Legend.dir/qrc_legend.cxx.s

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.requires:
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.requires

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.provides: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.requires
	$(MAKE) -f plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build.make plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.provides.build
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.provides

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.provides.build: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o

# Object files for target Legend
Legend_OBJECTS = \
"CMakeFiles/Legend.dir/legend.cpp.o" \
"CMakeFiles/Legend.dir/moc_legend.cxx.o" \
"CMakeFiles/Legend.dir/qrc_legend.cxx.o"

# External object files for target Legend
Legend_EXTERNAL_OBJECTS =

plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o
plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o
plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o
plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build.make
plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/chartinterface/libChartInterface.a
plugins/report/items/charts/legend/libLegend.so: libs/report/libReport.so.2.0.0
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/items/charts/legend/libLegend.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/items/charts/legend/libLegend.so: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libLegend.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Legend.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build: plugins/report/items/charts/legend/libLegend.so
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/build

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/requires: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/legend.cpp.o.requires
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/requires: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/moc_legend.cxx.o.requires
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/requires: plugins/report/items/charts/legend/CMakeFiles/Legend.dir/qrc_legend.cxx.o.requires
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/requires

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend && $(CMAKE_COMMAND) -P CMakeFiles/Legend.dir/cmake_clean.cmake
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/clean

plugins/report/items/charts/legend/CMakeFiles/Legend.dir/depend: plugins/report/items/charts/legend/moc_legend.cxx
plugins/report/items/charts/legend/CMakeFiles/Legend.dir/depend: plugins/report/items/charts/legend/qrc_legend.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/charts/legend /home/joana/git/faocas_qc/exaro_2.0.0/build /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/charts/legend/CMakeFiles/Legend.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/items/charts/legend/CMakeFiles/Legend.dir/depend

