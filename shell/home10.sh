#!/bin/bash


for var in file_dir dir_dir
do
    if [ -e ~/$var ]
    then
        echo "del then create ? (y/Y-n/N)"
        read anw;
        if [ $anw = "y" -o $anw = "Y" ]
        then 
            rm -r ~/$var
            echo "del...ok"
            echo "creating..."
            mkdir ~/$var
            echo "ok...."
        else
            echo "Nothing to do..."
            echo "exit..."
        fi
    else
        echo "Not exist..."
        echo "Creating..."
        mkdir ~/$var
    fi
done

filec=0
dirc=0

if [ $# -eq 1 ]
then
    echo "........."
    DIR=`ls $1`
    for var1 in $DIR
    do
        if [ -d $var1 ]
        then
            ((++dirc))
            echo "$var1"
            cp $1/$var1 ~/dir_dir -a
        else
            ((++filec))
            echo "$var1"
            cp $1/$var1 ~/file_dir
        fi
    done
    echo "file count :$filec"
    echo "dir count :$dirc"
fi
