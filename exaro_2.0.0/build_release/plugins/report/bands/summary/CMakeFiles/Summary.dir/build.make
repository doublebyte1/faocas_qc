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
include plugins/report/bands/summary/CMakeFiles/Summary.dir/depend.make

# Include the progress variables for this target.
include plugins/report/bands/summary/CMakeFiles/Summary.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/bands/summary/CMakeFiles/Summary.dir/flags.make

plugins/report/bands/summary/moc_summary.cxx: ../plugins/report/bands/summary/summary.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_summary.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build_release -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/release/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/moc_summary.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary/summary.h

plugins/report/bands/summary/qrc_summary.cxx: ../plugins/report/bands/summary/summary.png
plugins/report/bands/summary/qrc_summary.cxx: plugins/report/bands/summary/summary.qrc.depends
plugins/report/bands/summary/qrc_summary.cxx: ../plugins/report/bands/summary/summary.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_summary.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name summary -o /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/qrc_summary.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary/summary.qrc

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o: plugins/report/bands/summary/CMakeFiles/Summary.dir/flags.make
plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o: ../plugins/report/bands/summary/summary.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Summary.dir/summary.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary/summary.cpp

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Summary.dir/summary.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary/summary.cpp > CMakeFiles/Summary.dir/summary.cpp.i

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Summary.dir/summary.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary/summary.cpp -o CMakeFiles/Summary.dir/summary.cpp.s

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.requires:
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.requires

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.provides: plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.requires
	$(MAKE) -f plugins/report/bands/summary/CMakeFiles/Summary.dir/build.make plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.provides.build
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.provides

plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.provides.build: plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o: plugins/report/bands/summary/CMakeFiles/Summary.dir/flags.make
plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o: plugins/report/bands/summary/moc_summary.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Summary.dir/moc_summary.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/moc_summary.cxx

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Summary.dir/moc_summary.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/moc_summary.cxx > CMakeFiles/Summary.dir/moc_summary.cxx.i

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Summary.dir/moc_summary.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/moc_summary.cxx -o CMakeFiles/Summary.dir/moc_summary.cxx.s

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.requires:
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.requires

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.provides: plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.requires
	$(MAKE) -f plugins/report/bands/summary/CMakeFiles/Summary.dir/build.make plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.provides.build
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.provides

plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.provides.build: plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o: plugins/report/bands/summary/CMakeFiles/Summary.dir/flags.make
plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o: plugins/report/bands/summary/qrc_summary.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_release/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Summary.dir/qrc_summary.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/qrc_summary.cxx

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Summary.dir/qrc_summary.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/qrc_summary.cxx > CMakeFiles/Summary.dir/qrc_summary.cxx.i

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Summary.dir/qrc_summary.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/qrc_summary.cxx -o CMakeFiles/Summary.dir/qrc_summary.cxx.s

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.requires:
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.requires

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.provides: plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.requires
	$(MAKE) -f plugins/report/bands/summary/CMakeFiles/Summary.dir/build.make plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.provides.build
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.provides

plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.provides.build: plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o

# Object files for target Summary
Summary_OBJECTS = \
"CMakeFiles/Summary.dir/summary.cpp.o" \
"CMakeFiles/Summary.dir/moc_summary.cxx.o" \
"CMakeFiles/Summary.dir/qrc_summary.cxx.o"

# External object files for target Summary
Summary_EXTERNAL_OBJECTS =

plugins/report/bands/summary/libSummary.so: plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o
plugins/report/bands/summary/libSummary.so: plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o
plugins/report/bands/summary/libSummary.so: plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o
plugins/report/bands/summary/libSummary.so: plugins/report/bands/summary/CMakeFiles/Summary.dir/build.make
plugins/report/bands/summary/libSummary.so: libs/report/libReport.so.2.0.0
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/bands/summary/libSummary.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/bands/summary/libSummary.so: plugins/report/bands/summary/CMakeFiles/Summary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libSummary.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Summary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/bands/summary/CMakeFiles/Summary.dir/build: plugins/report/bands/summary/libSummary.so
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/build

plugins/report/bands/summary/CMakeFiles/Summary.dir/requires: plugins/report/bands/summary/CMakeFiles/Summary.dir/summary.cpp.o.requires
plugins/report/bands/summary/CMakeFiles/Summary.dir/requires: plugins/report/bands/summary/CMakeFiles/Summary.dir/moc_summary.cxx.o.requires
plugins/report/bands/summary/CMakeFiles/Summary.dir/requires: plugins/report/bands/summary/CMakeFiles/Summary.dir/qrc_summary.cxx.o.requires
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/requires

plugins/report/bands/summary/CMakeFiles/Summary.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary && $(CMAKE_COMMAND) -P CMakeFiles/Summary.dir/cmake_clean.cmake
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/clean

plugins/report/bands/summary/CMakeFiles/Summary.dir/depend: plugins/report/bands/summary/moc_summary.cxx
plugins/report/bands/summary/CMakeFiles/Summary.dir/depend: plugins/report/bands/summary/qrc_summary.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/bands/summary /home/joana/git/faocas_qc/exaro_2.0.0/build_release /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary /home/joana/git/faocas_qc/exaro_2.0.0/build_release/plugins/report/bands/summary/CMakeFiles/Summary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/bands/summary/CMakeFiles/Summary.dir/depend

