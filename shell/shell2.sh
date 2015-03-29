#!/bin/bash
#/* 09:38 2015-03-27 Friday */

LINE=`cat /etc/passwd | grep -n "ubuntu" | cut -d ":" -f 1`

MES=`cat -n /etc/passwd | grep $LINE | cut -d ":" -f 1,3,4`

echo $LINE
echo $MES
