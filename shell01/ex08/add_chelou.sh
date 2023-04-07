#!/bin/bash

#export FT_NBR1=\\\'\?\"\\\"\'\\
#export FT_NBR2=rcrdmddd

#export FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#export FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

ENV=$(echo ${FT_NBR1} | sed "s/\'/0/g" | sed 's/\\/1/g' | sed 's/\"/2/g' | sed 's/\?/3/g' | sed 's/\!/4/g')
EENV=$(echo ${FT_NBR2} | tr 'mrdoc' '01234')

echo "obase=13;ibase=5;$ENV+$EENV" | bc | tr '0123456789ABC' 'gtaio luSnemf'

exit 0
