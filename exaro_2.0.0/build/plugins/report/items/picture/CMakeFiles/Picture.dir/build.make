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
include plugins/report/items/picture/CMakeFiles/Picture.dir/depend.make

# Include the progress variables for this target.
include plugins/report/items/picture/CMakeFiles/Picture.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/report/items/picture/CMakeFiles/Picture.dir/flags.make

plugins/report/items/picture/moc_picture.cxx: ../plugins/report/items/picture/picture.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_picture.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/local/Trolltech/Qt-4.8.6/bin/moc -I/home/joana/git/faocas_qc/exaro_2.0.0/libs/report -I/usr/local/Trolltech/Qt-4.8.6/include -I/usr/local/Trolltech/Qt-4.8.6/include/QtScript -I/usr/local/Trolltech/Qt-4.8.6/include/QtUiTools -I/usr/local/Trolltech/Qt-4.8.6/include/QtWebKit -I/usr/local/Trolltech/Qt-4.8.6/include/QtGui -I/usr/local/Trolltech/Qt-4.8.6/include/QtXml -I/usr/local/Trolltech/Qt-4.8.6/include/QtSql -I/usr/local/Trolltech/Qt-4.8.6/include/QtCore -I/home/joana/git/faocas_qc/exaro_2.0.0 -I/usr/local/Trolltech/Qt-4.8.6/include -I/home/joana/git/faocas_qc/exaro_2.0.0/build -DEXARO_VERSION=\"2.0.0\" -DQT_SCRIPT_LIB -DQT_UITOOLS_LIB -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_CORE_LIB -DLIB_INSTALL_DIR=\"/home/joana/git/faocas_qc/exaro-package/exaro/lib\" -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/moc_picture.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture/picture.h

plugins/report/items/picture/qrc_picture.cxx: ../plugins/report/items/picture/picture.png
plugins/report/items/picture/qrc_picture.cxx: ../plugins/report/items/picture/empty.png
plugins/report/items/picture/qrc_picture.cxx: plugins/report/items/picture/picture.qrc.depends
plugins/report/items/picture/qrc_picture.cxx: ../plugins/report/items/picture/picture.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_picture.cxx"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/local/Trolltech/Qt-4.8.6/bin/rcc -name picture -o /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/qrc_picture.cxx /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture/picture.qrc

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o: plugins/report/items/picture/CMakeFiles/Picture.dir/flags.make
plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o: ../plugins/report/items/picture/picture.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Picture.dir/picture.cpp.o -c /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture/picture.cpp

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Picture.dir/picture.cpp.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture/picture.cpp > CMakeFiles/Picture.dir/picture.cpp.i

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Picture.dir/picture.cpp.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture/picture.cpp -o CMakeFiles/Picture.dir/picture.cpp.s

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.requires:
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.requires

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.provides: plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.requires
	$(MAKE) -f plugins/report/items/picture/CMakeFiles/Picture.dir/build.make plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.provides.build
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.provides

plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.provides.build: plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o: plugins/report/items/picture/CMakeFiles/Picture.dir/flags.make
plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o: plugins/report/items/picture/moc_picture.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Picture.dir/moc_picture.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/moc_picture.cxx

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Picture.dir/moc_picture.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/moc_picture.cxx > CMakeFiles/Picture.dir/moc_picture.cxx.i

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Picture.dir/moc_picture.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/moc_picture.cxx -o CMakeFiles/Picture.dir/moc_picture.cxx.s

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.requires:
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.requires

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.provides: plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.requires
	$(MAKE) -f plugins/report/items/picture/CMakeFiles/Picture.dir/build.make plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.provides.build
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.provides

plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.provides.build: plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o: plugins/report/items/picture/CMakeFiles/Picture.dir/flags.make
plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o: plugins/report/items/picture/qrc_picture.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/joana/git/faocas_qc/exaro_2.0.0/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Picture.dir/qrc_picture.cxx.o -c /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/qrc_picture.cxx

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Picture.dir/qrc_picture.cxx.i"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/qrc_picture.cxx > CMakeFiles/Picture.dir/qrc_picture.cxx.i

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Picture.dir/qrc_picture.cxx.s"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/qrc_picture.cxx -o CMakeFiles/Picture.dir/qrc_picture.cxx.s

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.requires:
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.requires

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.provides: plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.requires
	$(MAKE) -f plugins/report/items/picture/CMakeFiles/Picture.dir/build.make plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.provides.build
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.provides

plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.provides.build: plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o

# Object files for target Picture
Picture_OBJECTS = \
"CMakeFiles/Picture.dir/picture.cpp.o" \
"CMakeFiles/Picture.dir/moc_picture.cxx.o" \
"CMakeFiles/Picture.dir/qrc_picture.cxx.o"

# External object files for target Picture
Picture_EXTERNAL_OBJECTS =

plugins/report/items/picture/libPicture.so: plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o
plugins/report/items/picture/libPicture.so: plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o
plugins/report/items/picture/libPicture.so: plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o
plugins/report/items/picture/libPicture.so: plugins/report/items/picture/CMakeFiles/Picture.dir/build.make
plugins/report/items/picture/libPicture.so: libs/report/libReport.so.2.0.0
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtScript.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtUiTools.a
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtWebKit.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXmlPatterns.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtGui.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtXml.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtSql.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtNetwork.so
plugins/report/items/picture/libPicture.so: /usr/local/Trolltech/Qt-4.8.6/lib/libQtCore.so
plugins/report/items/picture/libPicture.so: plugins/report/items/picture/CMakeFiles/Picture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libPicture.so"
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Picture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/report/items/picture/CMakeFiles/Picture.dir/build: plugins/report/items/picture/libPicture.so
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/build

plugins/report/items/picture/CMakeFiles/Picture.dir/requires: plugins/report/items/picture/CMakeFiles/Picture.dir/picture.cpp.o.requires
plugins/report/items/picture/CMakeFiles/Picture.dir/requires: plugins/report/items/picture/CMakeFiles/Picture.dir/moc_picture.cxx.o.requires
plugins/report/items/picture/CMakeFiles/Picture.dir/requires: plugins/report/items/picture/CMakeFiles/Picture.dir/qrc_picture.cxx.o.requires
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/requires

plugins/report/items/picture/CMakeFiles/Picture.dir/clean:
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture && $(CMAKE_COMMAND) -P CMakeFiles/Picture.dir/cmake_clean.cmake
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/clean

plugins/report/items/picture/CMakeFiles/Picture.dir/depend: plugins/report/items/picture/moc_picture.cxx
plugins/report/items/picture/CMakeFiles/Picture.dir/depend: plugins/report/items/picture/qrc_picture.cxx
	cd /home/joana/git/faocas_qc/exaro_2.0.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joana/git/faocas_qc/exaro_2.0.0 /home/joana/git/faocas_qc/exaro_2.0.0/plugins/report/items/picture /home/joana/git/faocas_qc/exaro_2.0.0/build /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture /home/joana/git/faocas_qc/exaro_2.0.0/build/plugins/report/items/picture/CMakeFiles/Picture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/report/items/picture/CMakeFiles/Picture.dir/depend

