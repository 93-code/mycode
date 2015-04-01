#!/bin/bash
#/* 09:11 2015-03-27 Friday */


mkdir /home/ubuntu/shell

cp /etc/{passwd,group} /home/ubuntu/shell

cp /home/ubuntu/shell /home/ubuntu/shell-bak -a

tar -czf /home/ubuntu/shell-bak.tar.gz /home/ubuntu/shell-bak

cp /home/ubuntu/shell-bak.tar.gz /media/sf_shared

ls -lh /home/ubuntu/shell-bak.tar.gz
