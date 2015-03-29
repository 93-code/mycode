#!/bin/bash

echo "Input score:"
read score

if [ $score -lt 0 -o $score -gt 100 ]
then
    echo "Error..."
    exit
fi

if [ $score -gt 0 -a $score -lt 60 ]
then 
    echo "E"
    exit
fi

if [ $score -ge 60 -a $score -lt 70 ]
then 
    echo "D"
    exit
fi

if [ $score -ge 70 -a $score -lt 80 ]
then
    echo "C"
    exit
fi

if [ $score -ge 80 -a $score -lt 90 ]
then 
    echo "B"
    exit
fi

if [ $score -ge 90 -a $score -le 100 ]
then 
    echo "A"
    exit
fi

