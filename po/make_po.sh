#!/bin/sh
#intltool-update -p
#make update-po

#find src | grep -e ".*\.c$" -e ".*\.h$" > po/POTFILES.in
ls -1  src/*.{c,h,cpp} > po/POTFILES.in
#xgettext -k_ -o hoge.pot hoge.c
