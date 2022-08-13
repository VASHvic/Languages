#!/bin/bash


url=https://temptemp3.github.io
curl ${url} -I -o headers -s

cat  headers


