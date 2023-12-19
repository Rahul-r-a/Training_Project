#!/bin/sh
echo Who are you
read NAME
sleep 1 # for creating a delay
echo Hello $NAME
echo What are you looking for
read ANSWER
sleep 1
echo "You are looking for" $ANSWER 
