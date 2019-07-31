#!/bin/sh
ifconfig -u | grep ether | cut -c 8-24
