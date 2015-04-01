#!/bin/bash

score=$1
if [ $score -lt 0 -o $score -gt 100 ]
then 
    echo "Error..."
else
    if [ $score -gt 0 -a $score -lt 60 ]
    then 
        echo "E"
    else
        if [ $score -ge 60 -a $score -lt 70 ]
        then
            echo "D"
        else
            if [ $score -ge 70 -a $score -lt 80 ]
            then 
                echo "C"
            else
                if [ $score -ge 80 -a $score -lt 90 ]
                then 
                    echo "B"
                else
                    echo "A"
                fi 
            fi
        fi
    fi
fi

