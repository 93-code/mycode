#!/bin/bash

function check_user()
{
    line=`cat /etc/passwd | grep -n "$1" | cut -d ":" -f 1`
    if [ -z "$line" ]
    then
        return 0 
    fi
    return $line
}

function show_user()
{
    INF=`head -$1 /etc/passwd | tail -1 | cut -d ":" -f 1,3,4`
    echo "$INF"
}

while :
do
    echo "Input user name:"    
    read user

    if [ $user = "quit" ]
    then 
        exit 1
    fi

   check_user $user
   RET=$?

   if [ $RET -ne 0 ]
   then
       show_user $RET 
   fi 
    

done
