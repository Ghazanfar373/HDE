
#echo === FDMPublisher

cd ../exec

if [ "$1" = "" ]; then 
   ./FDMDataPublisher
else
   ./FDMDataPublisher > ./$1 ; 
fi

cd ../sh
