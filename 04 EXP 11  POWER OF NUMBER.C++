//Write an assembly program to develop a function to compute the power of a number (x^n).

LXI H,0000H
MOV B,M
INX H
MOV C,M
MVI D,01H
POWERLOOP: CALL MULTIPLY
DCR C
JNZ POWERLOOP
INX H
MOV M,D
HLT
MULTIPLY:MOV E,B
MVI A,00H
MULTIPLYLOOP:ADD D
DCR E
JNZ MULTIPLYLOOP
MOV D,A
RET
