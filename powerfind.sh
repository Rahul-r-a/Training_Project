#!/bin/bash
echo Enter the base number 
read NUM
echo Enter the power of the number
read POWER

result=$(($NUM**$POWER))
echo $result

