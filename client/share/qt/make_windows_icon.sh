#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/parabola.png
ICON_DST=../../src/qt/res/icons/parabola.ico
convert ${ICON_SRC} -resize 16x16 parabola-16.png
convert ${ICON_SRC} -resize 32x32 parabola-32.png
convert ${ICON_SRC} -resize 48x48 parabola-48.png
convert parabola-16.png parabola-32.png parabola-48.png ${ICON_DST}

