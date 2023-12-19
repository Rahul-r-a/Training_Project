#!/bin/bash

echo Current working Directory : 
pwd

read -p "Enter the path to create directory and file" path

cd $path

echo Enter the folder name :
read folder
mkdir $folder

ls

cd $folder

echo Enter the file name to create :
read file
touch $file
