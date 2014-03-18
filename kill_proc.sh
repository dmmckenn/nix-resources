#!/usr/bin/env bash
ps|awk -v st=$1 '{if($4==st)print $1}' | while read p; do kill -9 $p; done
