#!/bin/bash

id -Gn ${FT_USER} | sed 's/ /\,/g' | tr -d '\n'

exit 0
