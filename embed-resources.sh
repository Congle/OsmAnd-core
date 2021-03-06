#!/bin/bash

SRCLOC="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PYTHON3=`which python3`
if [ ! -f "$PYTHON3" ]; then
	PYTHON3=`which python3.1`
fi
if [ ! -f "$PYTHON3" ]; then
	PYTHON3=`which python3.2`
fi
if [ ! -f "$PYTHON3" ]; then
	PYTHON3=`which python3.3`
fi
if [ ! -f "$PYTHON3" ]; then
	PYTHON3=`which python3.4`
fi
if [ ! -f "$PYTHON3" ]; then
	echo "Python3 not found"
	exit
fi

"$PYTHON3" "$SRCLOC/embed-resources.py" "$@"
