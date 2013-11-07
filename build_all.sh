echo "Building All:"
echo "Building Property Editor Debug"
cd $PROJDIR/propertyeditor-2.1.3/build_debug/
make && make install
echo "Building Property Editor Release"
cd $PROJDIR/propertyeditor-2.1.3/build_release/
make && make install
echo "Building Exaro Debug"
cd $PROJDIR/exaro_2.0.0/build_debug/
make && make install
echo "Building Exaro Release"
cd $PROJDIR/exaro_2.0.0/build_release/
make && make install

echo "Building CatchInputCtrl"
cd $PROJDIR/CatchInputCtrl/CatchInputCtrl 
colormake debug && colormake release

echo "Building CustomTimeCtrl"
cd $PROJDIR/CustomTimeCtrl/CustomTimeCtrl
colormake debug && colormake release

echo "Building confapp"
cd $PROJDIR/app_solution/conf_app
colormake debug && colormake release

echo "Building faocas"
cd $PROJDIR/app_solution/app_new
colormake debug && colormake release

echo "Ok! ;-)"


#compile propertyeditor
#compile exaro
#compile plugins
#compile conf_app

#make a script for windows
