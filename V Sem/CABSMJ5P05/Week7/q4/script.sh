#!/bin/bash

echo "System Uptime"
uptime -p

echo "Top 10 running procs"
ps aux | head -n 11
