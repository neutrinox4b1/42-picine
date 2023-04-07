#!/bin/bash

ifconfig -a | grep "^\tether " | awk '{print $2}'

exit 0
