//Write an assembly program to take two numbers as input and output their sum using memory.

LXI H, 2000H
MOV B,M
LXI H,2001H
MOV C,M
MOV A,B
ADD C
STA 3000H
HLT