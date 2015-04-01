#!/bin/bash

mkdir /tmp/shell
cp /etc/{passwd,group} /tmp/shell
cp /tmp/shell /tmp/shell-bak -a

tar -cjvf /tmp/shell-bak.tar.gz /tmp/shell-bak
cp /tmp/shell-bak.tar.gz /tmp/.

ls -lh /tmp/shell-bak.tar.gz

