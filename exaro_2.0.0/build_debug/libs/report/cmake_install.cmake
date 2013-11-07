# Install script for directory: /home/joana/git/faocas_qc/exaro_2.0.0/libs/report

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/joana/git/faocas_qc/exaro-package/exaro/debug")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so.2.0.0;/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so.2.0;/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib" TYPE SHARED_LIBRARY FILES
    "/home/joana/git/faocas_qc/exaro_2.0.0/build_debug/libs/report/libReport.so.2.0.0"
    "/home/joana/git/faocas_qc/exaro_2.0.0/build_debug/libs/report/libReport.so.2.0"
    "/home/joana/git/faocas_qc/exaro_2.0.0/build_debug/libs/report/libReport.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so.2.0.0"
      "$ENV{DESTDIR}/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so.2.0"
      "$ENV{DESTDIR}/home/joana/git/faocas_qc/exaro-package/exaro/debug/lib/libReport.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/bandinterface.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/exportinterface.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/iteminterface.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/pageinterface.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/reportinterface.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/reportengine.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/globals.h;/home/joana/git/faocas_qc/exaro-package/exaro/debug/include/sqlquery.h")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/joana/git/faocas_qc/exaro-package/exaro/debug/include" TYPE FILE FILES
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/bandinterface.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/exportinterface.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/iteminterface.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/pageinterface.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/reportinterface.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/reportengine.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/globals.h"
    "/home/joana/git/faocas_qc/exaro_2.0.0/libs/report/sqlquery.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

