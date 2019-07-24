if [ "$1" = "" ]; then 
   ../exec/FDMDataSubscriber
else
   ../exec/FDMDataSubscriber > $1
fi
