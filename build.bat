@echo off

gcc -Wall -g -c %1.c -o %1.o
gcc -o %1.exe %1.o   