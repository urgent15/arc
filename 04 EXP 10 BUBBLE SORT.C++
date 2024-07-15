//Write an assembly program to develop a function to perform the bubble sort algorithm on an integer array.

START: LXI H,0040H
MVI D,00H
MOV C,M
DCR C
INX H
FLAG: MOV A,M
INX H
CMP M
JC NEXT
JZ NEXT
MOV B,M
MOV M,A
DCX H
MOV M,B
INX H
MVI D,01H
NEXT: DCR C
JNZ FLAG
MOV A,D
CPI 01H
JZ START
HLT
