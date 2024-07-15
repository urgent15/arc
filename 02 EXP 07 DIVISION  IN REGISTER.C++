//Write an assembly program to take two numbers as input and output their quotient using registers.

MVI A,00H
MVI B,06H
MVI C,03H
MVI D,00H
MOV A,B
LOOP: CMP C
JC LOOP2
INR D
SUB C
JMP LOOP
LOOP2:MOV A,D
STA 3000H
HLT
