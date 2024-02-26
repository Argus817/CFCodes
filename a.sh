#!/bin/bash

input="$1"
num="`echo $input | cut -c 1-4`"
letter="`echo $input | cut -c 5`"

echo $num
echo $letter


