//Write an assembly program to take two numbers as input and output their product using registers.

MVI A,00H
MVI B,04H
MVI C,03H
MVI D,00H
LOOP2: ADD B
JNC LOOP
INR D
LOOP: DCR C
JNZ LOOP2
STA 3000H
HLT
