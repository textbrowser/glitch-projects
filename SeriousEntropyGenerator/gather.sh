#!/usr/bin/env sh
# Alexis Megas

rm -f data.txt

for i in $(seq 1 100000); do
    echo "Gathering point $i."
    value=$(echo | netcat -q 0 192.168.178.85 5000)
    echo "$value" >> data.txt
done
