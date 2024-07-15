//Write an assembly program to implement a function to check if a given number is a palindrome.

LDA 8000H
MOV M,A
MVI C,08H
LOOP: MOV A,H
RLC
MOV M,A
MOV A,D
RAR
MOV D,A
DCR C
JNZ LOOP
MOV A,H
CMP D
JZ TRUE
MVI A,00H
JMP EXIT
TRUE:MVI A,FFH
EXIT:STA 8010H
HLT
