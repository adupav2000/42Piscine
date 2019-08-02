#!/bin/sh
ifconfig -u | grep ether | sed 's/ether//' | tr -d '\t' | tr -d ' '
