#!/bin/bash

sum=0
i=1

if [ $# -eq 0 ]
then
    echo "Usage : $0 file [num]"
    exit 1
fi

if [ $# -eq 2 ]
then
    file=$1
    ((num=$2))
fi

if [ $# -eq 1 ]
then
    file=$1
    ((num=5))
fi

while (( i <= num ))
do
    touch $file$i.txt
    ((i++))
done

echo "Creating file..........."

