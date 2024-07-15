//Write an assembly program to calculate the factorial of a given number.

MVI B, 04H
MVI D, 01H
FACT: CALL MULT
DCR B
JNZ FACT
LXI H,000H
MOV M,D
HLT
MULT: MOV E,B
MVI A,00H
LOOP: ADD D
DCR E
JNZ LOOP
MOV D,A
RET
