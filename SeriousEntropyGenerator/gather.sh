#!/usr/bin/env sh
# Alexis Megas

if [ ! -x "$(which socat)" ]; then
    echo "Please install socat."
    exit 1
fi

rm -f data.txt

for i in $(seq 1 100000); do
    /bin/echo -n "Gathering point $i... "
    value=$(echo | socat - TCP4:192.168.178.85:5000 2>/dev/null)

    if [ ! -z "$value" ]; then
        echo "$value" >> data.txt
	echo "Lovely."
    else
	echo "Error!"
    fi
done
