//Write an assembly program to determine whether a given year is a leap year or not using conditional branches.

LDA 2500H
RAR
JC LOOP
RAR
JC LOOP
MVI A,02H
STA 2501H
HLT
LOOP: MVI A,01H
STA 2501H
HLT
