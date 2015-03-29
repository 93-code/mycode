#!/bin/bash

DIR=$1
fc=0
dc=0

if [ -d $DIR ]  
then
    LIST=`ls $DIR` 
    echo $LIST | wc -w

    for var in $LIST
    do
        if [ -f $var ] 
        then 
            ((fc++))
        else [ -d $var ]
            ((dc++))
        fi
    done

    echo "file count = $fc"
    echo "dir count = $dc"

else
    echo "not dir.."
fi

