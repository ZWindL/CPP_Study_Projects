#!/usr/bin/env bash

file=$1

cat $1|grep -E "^[^#]">$1".dist"
