#!/bin/sh

list=$(docker images -q -f "dangling=true" -f "label=autodelete=true" -f "label=project="$1)
if [ -n "$list" ]; then
     docker rmi $list
fi
