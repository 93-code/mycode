#!/bin/bash

echo -n "Input string:"
read STR

case $STR in 
    "ABC")
        echo "ABC"
        ;;
    "123")
        echo "123"
        ;;
    *)
        echo "Other"
esac
