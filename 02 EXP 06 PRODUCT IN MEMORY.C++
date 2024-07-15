//Write an assembly program to take two numbers as input and output their product using memory.

LXI H, 2000H
MOV B,M
MVI A,00H
MVI D,00H
INX H
MOV C,M
LOOP2: ADD B
JNC LOOP
INR D
LOOP: DCR C
JNZ LOOP2
STA 2005H
MOV A,D
STA 2006H
HLT
