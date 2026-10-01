#!/bin/bash

read -p "Enter time in ms: " time

newtime=$(echo "scale=2; $time*1000000" | bc)

echo "Nanoseconds: $newtime"

newtime=$(echo "scale=2; $time*1000" | bc)

echo "Microsecond: $newtime"

newtime=$(echo "scale=2; $time/1000" | bc)

echo "Seconds: $newtime"

