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
include apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/depend.make

# Include the progress variables for this target.
include apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/progress.make

# Include the compile flags for this target's objects.
include apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/flags.make

apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx: ../apps/designer/plugins/toolbars/font/fonttoolbar.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_fonttoolbar.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build_debug -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font/fonttoolbar.h

apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx: ../apps/designer/plugins/toolbars/font/fonttoolbar.png
apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx: apps/designer/plugins/toolbars/font/fonttoolbar.qrc.depends
apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx: ../apps/designer/plugins/toolbars/font/fonttoolbar.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_fonttoolbar.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name fonttoolbar -o /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font/fonttoolbar.qrc

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/flags.make
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o: ../apps/designer/plugins/toolbars/font/fonttoolbar.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font/fonttoolbar.cpp

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font/fonttoolbar.cpp > CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.i

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font/fonttoolbar.cpp -o CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.s

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.requires:
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.requires

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.provides: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.requires
	$(MAKE) -f apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build.make apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.provides.build
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.provides

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.provides.build: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/flags.make
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o: apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx > CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.i

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx -o CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.s

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.requires:
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.requires

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.provides: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.requires
	$(MAKE) -f apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build.make apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.provides.build
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.provides

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.provides.build: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/flags.make
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o: apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx > CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.i

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx -o CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.s

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.requires:
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.requires

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.provides: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.requires
	$(MAKE) -f apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build.make apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.provides.build
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.provides

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.provides.build: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o

# Object files for target Fonttoolbar
Fonttoolbar_OBJECTS = \
"CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o" \
"CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o" \
"CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o"

# External object files for target Fonttoolbar
Fonttoolbar_EXTERNAL_OBJECTS =

apps/designer/plugins/toolbars/font/libFonttoolbar.so: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o
apps/designer/plugins/toolbars/font/libFonttoolbar.so: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o
apps/designer/plugins/toolbars/font/libFonttoolbar.so: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o
apps/designer/plugins/toolbars/font/libFonttoolbar.so: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build.make
apps/designer/plugins/toolbars/font/libFonttoolbar.so: libs/report/libReport.so.2.0.0
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
apps/designer/plugins/toolbars/font/libFonttoolbar.so: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libFonttoolbar.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fonttoolbar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build: apps/designer/plugins/toolbars/font/libFonttoolbar.so
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/build

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/requires: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/fonttoolbar.cpp.o.requires
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/requires: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/moc_fonttoolbar.cxx.o.requires
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/requires: apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/qrc_fonttoolbar.cxx.o.requires
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/requires

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font && $(CMAKE_COMMAND) -P CMakeFiles/Fonttoolbar.dir/cmake_clean.cmake
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/clean

apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/depend: apps/designer/plugins/toolbars/font/moc_fonttoolbar.cxx
apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/depend: apps/designer/plugins/toolbars/font/qrc_fonttoolbar.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/apps/designer/plugins/toolbars/font /home/joana/git/faocas_qc/exaro_2.0.0/build_debug /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font /home/joana/git/faocas_qc/exaro_2.0.0/build_debug/apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/designer/plugins/toolbars/font/CMakeFiles/Fonttoolbar.dir/depend

