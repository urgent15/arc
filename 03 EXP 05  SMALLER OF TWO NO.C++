//Write an assembly language program to find the smaller of two numbers stored in memory locations 2501 H and 2502 H. Store the result in 2503H memory location.

LXI H,2501H
MOV A,H
LXI H,2502H
MOV B,M
CMP B
JC LOOP
MOV A,B
LOOP:STA 2503H
HLT
