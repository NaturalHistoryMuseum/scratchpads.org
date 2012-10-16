#!/bin/bash
for i in sponsor-logo-*.png; do convert -trim -background \#EEEEEE -gravity center -extent x72 $i $i; done
