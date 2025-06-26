#!/bin/bash

start=`date +%s`

num1=12
echo -n "First number is $num1"
num2=3
echo -n " Second number is $num2"
num3=6
echo -n " Third number is $num3"
sum=`expr $num1 + $num2 + $num3`
echo " Sum of the three number is $sum"

end=`date +%s`
echo " Execution time was `expr $end - $start` seconds"