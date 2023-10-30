# This is the C program of Quiz1-Problem A 
# translate to RISC-V assembly program

.data
test_data: .word 2147483648 # data1
#test1: .word 4294967295 # data1

check_stop: .word 32 #check_stop
srl_ele: .word 2147483648
op: .word 0xf0f 
str1: .string "Number of zero is "
newline: .string "\n"

.text
main:
    add s2,zero,zero #number_of_total_zero
    lw s11, check_stop
    
    la a0,str1
    li a7, 4
    ecall
    
    lw t0, test_data
    lw t5, test_data #origin x
    jal ra, counting_leading_zero
    j exit

counting_leading_zero:
    srli t1, t0, 1
    or t0, t1, t0
    srli t1, t0, 2
    or t0, t1, t0
    srli t1, t0, 4
    or t0, t1, t0
    srli t1, t0, 8
    or t0, t1, t0
    srli t1, t0, 16
    or t0, t1, t0
    
    srli t1, t0, 1
    lui s1, 0x55555
    addi s1,s1 0x555
    and t1, t1, s1
    sub t0, t0, t1
   
    srli t1, t0, 2
    lui s1, 0x33333
    addi s1,s1 0x333
    and t1, t1, s1
    and t3, t0, s1
    add t0, t1, t3
   
    srli t1, t0, 4
    add t0, t0, t1
    lui s7, 0x0f0f0
    lw s8, op
    add s7, s7, s8
    and t0, t0, s7
    
    srli t1, t0, 8
    add t0, t0, t1
   
    srli t1, t0, 16
    add t0, t0, t1
   
    andi t0, t0, 0x7f
    lw s1, check_stop
    sub s1, s1, t0 #number_of_leading_zero
    
    bne s1, s11, next_counting_leading_zero
    
    sub s2, s11, s2
    mv a0, s2 #print result
    li a7,1
    ecall
    jr ra

next_counting_leading_zero:
    lw s3, srl_ele
loop:
    beq s1, zero, next
    srli s3, s3, 1
    addi s1, s1, -1
    bne s1, zero, loop
next:
    sub t5, t5, s3
    add t0, t5, zero
    addi s2, s2, 1
    j counting_leading_zero
exit:
    nop
