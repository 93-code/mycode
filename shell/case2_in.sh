#!/bin/bash

score=$1
case $score in
   6[0-9])
        echo "D"
        exit
        ;;
   7[0-9])
        echo "C"
        exit
        ;;
   8[0-9])
        echo "B"
        exit
        ;;
   9[0-9])
        echo "A"
esac 
