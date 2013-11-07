@echo off
"C:\Qt\4.7.0\bin\moc.exe"   -DUNICODE -DWIN32 -DQT_LARGEFILE_SUPPORT -DQT_CORE_LIB -DQT_GUI_LIB -DQT_XML_LIB -DQT_SQL_LIB -DQT_XMLPATTERNS_LIB -DQT_SCRIPT_LIB  "-I.\GeneratedFiles" "-IC:\Qt\4.7.0\include" "-I.\GeneratedFiles\Debug\." "-IC:\Qt\4.7.0\include\qtmain" "-IC:\Qt\4.7.0\include\QtCore" "-IC:\Qt\4.7.0\include\QtGui" "-IC:\Qt\4.7.0\include\QtXml" "-IC:\Qt\4.7.0\include\QtSql" "-IC:\Qt\4.7.0\include\QtXmlPatterns" "-IC:\Qt\4.7.0\include\QtTest" "-I." "-IC:\boost\boost_1_44\." "-IC:\projects\VS\customctrl_solution\CustomTimeCtrl" "-IC:\projects\VS\customctrl_solution\CustomTimeCtrl\GeneratedFiles" "-IC:\Qt\4.7.0\include\QtWebKit" "-IC:\projects\VS\CatchInputCtrl\CatchInputCtrl" "-IC:\projects\VS\CatchInputCtrl\CatchInputCtrl\GeneratedFiles" "-IC:\projects\VS\app_solution\exaro_includes\." "-IC:\Qt\4.7.0\include\QtScript" "-IC:\Qt\4.7.0\include\QtHelp" "c:\projects\VS\app_solution\app_new\generictab.h" -o ".\GeneratedFiles\Debug\moc_generictab.cpp"

if errorlevel 1 goto VCReportError
goto VCEnd
:VCReportError
echo Project : error PRJ0019: A tool returned an error code from "Moc'ing generictab.h..."
exit 1
:VCEnd