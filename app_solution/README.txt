Environment Variables used on the project file:

BOOSTDIR - directory for boost headers (example: C:\boost\boost_1_44)
QTDIR - directory for QT library (example: C:\Qt\2010.04\qt)
QMAKESPEC - plattform and compilar description (example: win32-msvc2008, for Visiual Stuido 2008)
PROJDIR - root of the projects directory, where we have this project (app_solution), but also the projects for the plugins 
(with respective headers) - catchInputCtrl and TimeCustomCtrl
EXARO_LIBRARIES - location of exaro libraries
EXARO_INCLUDE_DIR - location of exaro includes

Before even trying to compile this project, you must successfully build timeCustomCtrl and CatchInputCtrl and make sure to *copy
 the resultant dlls* (debug and release) to the app_new directory.