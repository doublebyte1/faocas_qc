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
CMAKE_BINARY_DIR = /home/joana/git/faocas_qc/exaro_2.0.0/build_debug

# Include any dependencies generated for this target.
include plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/depend.make

# Include the progress variables for this target.
include plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/flags.make

plugins/report/export/csvTxt/moc_csvtxt.cxx: ../plugins/report/export/csvTxt/csvtxt.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_csvtxt.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build_debug -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_csvtxt.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/csvtxt.h

plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx: ../plugins/report/export/csvTxt/exportsettingsdialog.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_exportsettingsdialog.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build_debug -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/exportsettingsdialog.h

plugins/report/export/csvTxt/ui_exportSettingsDialog.h: ../plugins/report/export/csvTxt/exportSettingsDialog.ui
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ui_exportSettingsDialog.h"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/local/Trolltech/Qt-4.8.6/bin/uic -o /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/ui_exportSettingsDialog.h /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/exportSettingsDialog.ui

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/flags.make
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o: ../plugins/report/export/csvTxt/csvtxt.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CsvTxt.dir/csvtxt.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/csvtxt.cpp

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CsvTxt.dir/csvtxt.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/csvtxt.cpp > CMakeFiles/CsvTxt.dir/csvtxt.cpp.i

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CsvTxt.dir/csvtxt.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/csvtxt.cpp -o CMakeFiles/CsvTxt.dir/csvtxt.cpp.s

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.requires:
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.requires

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.provides: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.requires
	$(MAKE) -f plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build.make plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.provides.build
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.provides

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.provides.build: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/flags.make
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o: ../plugins/report/export/csvTxt/exportsettingsdialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/exportsettingsdialog.cpp

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/exportsettingsdialog.cpp > CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.i

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt/exportsettingsdialog.cpp -o CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.s

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.requires:
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.requires

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.provides: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.requires
	$(MAKE) -f plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build.make plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.provides.build
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.provides

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.provides.build: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/flags.make
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o: plugins/report/export/csvTxt/moc_csvtxt.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_csvtxt.cxx

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_csvtxt.cxx > CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.i

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_csvtxt.cxx -o CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.s

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.requires:
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.requires

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.provides: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.requires
	$(MAKE) -f plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build.make plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.provides.build
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.provides

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.provides.build: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/flags.make
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o: plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx > CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.i

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx -o CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.s

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.requires:
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.requires

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.provides: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.requires
	$(MAKE) -f plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build.make plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.provides.build
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.provides

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.provides.build: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o

# Object files for target CsvTxt
CsvTxt_OBJECTS = \
"CMakeFiles/CsvTxt.dir/csvtxt.cpp.o" \
"CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o" \
"CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o" \
"CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o"

# External object files for target CsvTxt
CsvTxt_EXTERNAL_OBJECTS =

plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o
plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o
plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o
plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o
plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build.make
plugins/report/export/csvTxt/libCsvTxt.so: libs/report/libReport.so.2.0.0
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/export/csvTxt/libCsvTxt.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/export/csvTxt/libCsvTxt.so: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libCsvTxt.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CsvTxt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build: plugins/report/export/csvTxt/libCsvTxt.so
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/build

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/requires: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/csvtxt.cpp.o.requires
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/requires: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/exportsettingsdialog.cpp.o.requires
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/requires: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_csvtxt.cxx.o.requires
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/requires: plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/moc_exportsettingsdialog.cxx.o.requires
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/requires

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt && $(CMAKE_COMMAND) -P CMakeFiles/CsvTxt.dir/cmake_clean.cmake
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/clean

plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/depend: plugins/report/export/csvTxt/moc_csvtxt.cxx
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/depend: plugins/report/export/csvTxt/moc_exportsettingsdialog.cxx
plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/depend: plugins/report/export/csvTxt/ui_exportSettingsDialog.h
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/export/csvTxt /home/joana/git/faocas_qc/exaro_2.0.0/build_debug /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/export/csvTxt/CMakeFiles/CsvTxt.dir/depend

