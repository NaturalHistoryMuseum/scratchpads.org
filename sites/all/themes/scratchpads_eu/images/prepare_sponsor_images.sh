#!/bin/bash
for i in sponsor-logo-*.png; do convert -trim -background white -gravity center -extent x72 $i $i; done
