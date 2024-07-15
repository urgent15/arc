//Write an assembly program to generate a series of odd numbers up to a specified limit.

LXI H,2000H
MOV C,M
MVI A,01H
MVI B,02H
LXI D,2001H
LOOP: STAX D
ADD B
INX D
CMP C
JC LOOP
HLT
