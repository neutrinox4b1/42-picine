#!/bin/bash

find . -type f -or -type d | wc -l | sed 's/ //g'

exit 0
