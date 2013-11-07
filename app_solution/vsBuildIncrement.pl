$path=shift;
$quiet=shift;

@out=`dir $path\\*.rc* /b`;
chomp @out;

foreach $thisfile (@out)
{
  $updated=0;
  $filepath=$path."\\".$thisfile;
  if (!$quiet) {print "Processing $filepath…\n"};
  @file=`type $filepath`;
  map 
   {
    $thisline=$_;

    # FILEVERSION
    #  FILEVERSION 1,0,0,0
    if ($thisline=~/(.+)FILEVERSION (\d+),(\d+),(\d+),(\d+)/)
     {
      $newline=$1."FILEVERSION $2,$3,$4,".($5+1)."\n";
      if (!$quiet)
       {
        print "Replace\n";
        print "   $thisline";
        print "with\n";
        print "   $newline";
       }
      $updated=1;
      $_=$newline;
     }    

    # FileVersion
    #              VALUE "FileVersion", "1.0.0.0"
    if ($thisline=~/(.+)VALUE \"FileVersion\", \"(\d+).(\d+).(\d+).(\d+)\"/)
     {
      $newline=$1."VALUE \"FileVersion\", \"$2.$3.$4.".($5+1)."\"\n";
      if (!$quiet)
       {
        print "Replace\n";
        print "   $thisline";
        print "with\n";
        print "   $newline\n";
       }
      $updated=1;
      $_=$newline;
     }    

   } @file;

  if ($updated)
   {
    open OFH,">$filepath";
    print OFH @file;
    close OFH;
   }

} 