#!/bin/sh
aclocal && autoconf && autoheader && automake -a

find . -name ".dep*" | xargs rm -rf
find . -name "Makefile" | xargs rm -rf
rm -rf autom4*
rm config.h.in~
rm config.log
rm config.status

# autoscan
# ./autogen.sh
# ./configure
# make
