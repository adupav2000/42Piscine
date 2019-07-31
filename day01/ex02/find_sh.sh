#!/bin/sh
find . -name "*.sh" | sed 's/\(\.*\)\///g' | sed 's/\.sh//g'
