#!/bin/bash

for i in *-202px.png.orig; do convert $i -alpha on -channel Alpha -evaluate multiply 0.75 -background white -gravity south -splice 0x7 ${i%.*}; done
