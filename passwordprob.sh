#!/bin/bash
username="rahula"
password="rohms3464"
read -p "Enter the Username : " Uname
read -p "Enter the password : " -s pass
if (($username == $Uname && $password == $pass))
then
	echo "Welcome" 
else
	echo " Wrong password or username"
fi
