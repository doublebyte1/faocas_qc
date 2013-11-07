echo "Cleaning All:"
echo "Cleaning Property Editor Debug"
cd $PROJDIR/propertyeditor-2.1.3/build_debug/
make clean
echo "Cleaning Property Editor Release"
cd $PROJDIR/propertyeditor-2.1.3/build_release/
make clean
echo "Cleaning Exaro Debug"
cd $PROJDIR/exaro_2.0.0/build_debug/
make clean
echo "Cleaning Exaro Release"
cd $PROJDIR/exaro_2.0.0/build_release/
make clean

echo "Cleaning CatchInputCtrl"
cd $PROJDIR/CatchInputCtrl/CatchInputCtrl 
colormake clean

echo "Cleaning CustomTimeCtrl"
cd $PROJDIR/CustomTimeCtrl/CustomTimeCtrl
colormake clean

echo "Cleaning confapp"
cd $PROJDIR/app_solution/conf_app
colormake clean

echo "Cleaning faocas"
cd $PROJDIR/app_solution/app_new
colormake clean

echo "Ok! ;-)"