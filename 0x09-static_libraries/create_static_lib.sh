#!/bin/bash
find . -name '*.c' |
while read line
do
echo "${line}"
out=$(echo $line |cut -d "/" -f2| cut -d "." -f1)
out="$out"'.o'
echo "creating ${out} file"
gcc -g -O -c "${line}" -o "${out}"
ar rc liball.a "${out}"
done
