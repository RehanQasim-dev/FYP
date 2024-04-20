.global verilate
verilate:
li x5 , 10
li x8, 15
add x28, x5, x8
addi x7, x8, 45
j loop
nop
nop

loop:
j loop
nop

