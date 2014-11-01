#!/bin/sh
mkdir $1
Alpha="A B C D E"
for al in $Alpha
do
    cp temple.cpp "$1/${al}.cpp"
done
