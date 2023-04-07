#!/bin/bash

find . -type f -name "*.sh" -exec basename {} ".sh" \;

exit 0
