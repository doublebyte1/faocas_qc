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
cd $PROJDIR/CatchInputCtrl/shadow_build
colormake clean

echo "Cleaning CustomTimeCtrl"
cd $PROJDIR/CustomTimeCtrl/shadow_build
colormake clean

echo "Cleaning confapp"
cd $PROJDIR/app_solution/shadow_build_confapp
colormake clean

echo "Cleaning faocas"
cd $PROJDIR/app_solution/shadow_build_faocas
colormake clean

echo "Ok! ;-)"
