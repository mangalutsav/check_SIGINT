#!/bin/bash
# main
trap 'myExit;' SIGINT
count=0
myExit()
{
	echo "Do you really want to exit? press y to confirm ...."
	read answer
	if [[ "$answer" == "y" ]]; 
		then
			echo "program is exiting...."
			sleep 1
			exit
		else
			echo "program will continue"
	fi
}
while :
do
	sleep 1
	count=$(expr $count + 1)
	echo $count
done