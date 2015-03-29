#!/bin/bash

read D1

test $D1 -gt 8 -a $D1 -lt 100
echo $?
