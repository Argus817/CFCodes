#!/bin/bash

c++ () {
num="$1"
letter="$2"
url="https://codeforces.com/problemset/problem/$num/$letter"
webPageData=$(curl -sL $url)
echo -e "\nOUTPUT:"
echo "$webPageData" | grep -o 'Example.*</pre>' | sed 's/<[^>]*>/\n/g' | sed 's/Examples//g' | sed 's/Example//g' | grep -v Input | grep . > input
g++ "$num$letter.cpp"
./a.out < input
}
