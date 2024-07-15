//Write an assembly program to calculate the sum of digits in a number using a function.

LDA 0000H
MOV C,A
ANI 0FH
MOV B,A
MOV A,C
RRC
RRC
RRC
RRC
ANI 0FH
ADD B
STA 0001H
HLT
