#!/bin/bash

c++ () {
num="$1"
letter="$2"
url="https://codeforces.com/problemset/problem/$num/$letter"
curl -sL $url > input
echo -e "\nOUTPUT:"
cat input | grep -o 'Example.*</pre>' | sed 's/<[^>]*>/\n/g' | sed 's/Examples//g' | sed 's/Example//g' | grep -v Input | grep . > input
g++ "$num$letter.cpp"
./a.out < input
}
