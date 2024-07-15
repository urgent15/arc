//Write an assembly program to display numbers from 1 to 5 using a loop

MVI A, 01H
MVI B, 01H
MVI C, 05H
LXI D,0001H
LOOP: STAX D
INX D
ADD B
DCR C
JNZ LOOP
HLT
