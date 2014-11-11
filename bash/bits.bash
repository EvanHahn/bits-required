#!/usr/bin/env bash
logged=`echo "(l($1)/l(2))/1" | bc -l`
echo $(( ${logged/.*} + 1 ))
