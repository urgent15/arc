//Develop an assembly program to check if a given number is odd or even using branching statements

LDA 0000H
RAR
JC LOOP
MVI A,22H
STA 0001H
HLT
LOOP: MVI A,11H
STA 0001H
HLT
