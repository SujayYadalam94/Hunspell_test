#!/bin/bash

path='/home/sujay/Documents/Hunspell_test/fault_sequences'

read string
sudo dmesg -c
clear
#string=$(python read_word.py)
./hunspell_test.o $string
dmesg > $path/$string.txt
vim -s $path/format.keys $path/$string.txt

