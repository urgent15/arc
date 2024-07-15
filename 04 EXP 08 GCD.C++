//Write an assembly program to implement a function to find the greatest common divisor (GCD) of two numbers.

MVI A,09H
MVI B,03H
CMP B
JZ DOWN
JNZ SHIFT
MOV C,A
MOV A,B
MOV B,C
SHIFT: SUB B
CMP B
JZ MOVE
JNZ SHIFT
MOV C,A
MOV A,B
MOV B,C
JMP SHIFT
MOVE: MOV A,B
DOWN: STA 0000H
HLT
