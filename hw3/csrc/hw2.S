.data
    #.align 8
    .global start
    input: .word 0x3f99999a
    sign_mask: .word 0x80000000
    exp_mask: .word 0x7F800000
    man_mask: .word 0x007FFFFF
    man16_mask: .word 0x007F0000
    r_mask: .word 0xFF800000
    divisor: .word 0x100
    mul_use: .word 0x00800000
    mul_use2: .word 0x01000000
    mul_use3: .word 0x3F800000
   

.text
start:
    lw x5, input # x5 = input
    addi x30, x0, 1
is_it_zero_or_infinity_or_NaN:
    # Load exp and man into a0 and a1
    lw a0, exp_mask
    lw a1, man_mask

    and x6, x5, a0     # exp
    and x7, x5, a1     # man
    
    # Check for zero
    beqz x6, zero_case
    beqz x7, zero_case

Normalize:
    # Check for infinity or NaN
    li a0, 0x7F800000
    beq x6, a0, infinity_nan_case

    # Normalized number
    add a0, x0, x5
    add x6, a0, x0
    
    lw a0, r_mask
    and x6, x6, a0     # r_mask

    # r /= 0x100
    srli x6, x6, 8
    
    add a0, x0, x5
    add x5, a0, x6     # y = x + r

    # Mask the lower 16 bits of y
    li t6, 0xFFFF0000
    and x5, x5, t6

    sw x5, 0(x8)
    
    addi x8, x8, 8
    
    j done

zero_case:
    sw x5, 0(x8)
    addi x8, x8, 8
    
    
    j done

infinity_nan_case:

    sw x5, 0(x8)
    addi x8, x8, 8
    
    j done

done:
    addi x30, x30, -1
    bnez x30, is_it_zero_or_infinity_or_NaN
  
    add t1, x0, x0    # initialize t1
    addi x8, x8, -8
    add a0, x5, x0
    add s11, x0, x0
    addi s11, s11, 12
    sw a0, 0(s11)
    ret