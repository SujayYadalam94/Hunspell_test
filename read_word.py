import os.path
import sys

f = open("words.txt","r")
firstline = f.readline()
print firstline

lines = f.readlines()
f.close()

f=open("words.txt","w")
f.write(''.join(lines[1:]))
f.close()
