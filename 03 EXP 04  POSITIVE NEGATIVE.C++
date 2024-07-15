//Develop an assembly program to determine if a given number is positive or negative using branching.

LXI H,6000H
MOV C,M
MVI B,00H
MVI D,00H
MVI E,00H
LOOP3: INX H
MOV A,M
ADI 00H
JZ LOOP1
JP LOOP2
INR E
LOOP1: INR D         
JMP LOOP4
LOOP2: INR B
LOOP4: DCR C
JNZ LOOP3
MOV A,D
STA 7000H
MOV A,B
STA 7001H
STA 2002H
HLT
