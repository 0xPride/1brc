#!/bin/bash

if [ "$1" = "" ]
then
  echo "Usage: $0 <number of measurements to be generated>"
  exit
fi

gcc ./create-sample.c -lm -o generate_measurements
./generate_measurements $1
rm ./generate_measurements

