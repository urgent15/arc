//Write an assembly program to take two numbers as input and output their sum using registers. // Write an 8085-assembly program that’s take two 8- bit numbers as input, each stored in a separate register and output their sum.//

MVI A, 25H
MVI B, 1AH
ADD B
STA 3000H
HLT
