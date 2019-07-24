echo "<<< OpenSplice HDE Release V5.5.1OSS For x86.linux2.6, Date 2012-05-23 >>>"
if [ "$SPLICE_ORB" = "" ]
then
    SPLICE_ORB=DDS_OpenFusion_1_6_1
    export SPLICE_ORB
fi
if [ "$SPLICE_JDK" = "" ]
then
    SPLICE_JDK=jdk
    export SPLICE_JDK
fi
OSPL_HOME="/home/sunny/HDE/x86.linux2.6"
OSPL_TARGET=x86.linux2.6
PATH=$OSPL_HOME/bin:$PATH
LD_LIBRARY_PATH=$OSPL_HOME/lib:$LD_LIBRARY_PATH
CPATH=$OSPL_HOME/include:$OSPL_HOME/include/sys:$OSPL_HOME/include/dcps/C++/SACPP:$CPATH
OSPL_TMPL_PATH=$OSPL_HOME/etc/idlpp
OSPL_URI=file://$OSPL_HOME/etc/config/ospl.xml
. $OSPL_HOME/etc/java/defs.$SPLICE_JDK
CLASSPATH=$OSPL_HOME/jar/dcpssaj.jar:$CLASSPATH
CLASSPATH=$OSPL_HOME/jar/dcpscj.jar:$CLASSPATH
export CLASSPATH OSPL_HOME OSPL_TARGET PATH LD_LIBRARY_PATH CPATH OSPL_TMPL_PATH OSPL_URI
$@


