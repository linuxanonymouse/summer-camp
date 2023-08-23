#!/bin/bash
mkdir openme; 
for i in {0..15}; 
do echo "abebe" | tr '[a-z]' '[zyxwvutsrqponmlkjihgfedcba]' > /home/kali/Desktop/task/openme/text-$i.txt; done
