Exercise 4.25
=============

What is the value of `~'q' << 6` on a machine with 32-bit ints and 8-bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

    'q'       = 01110001
    ~'q'      = 00000000000000000000000010001110
    ~'q' << 6 = 00000000000000000010001110000000
              = 9088
    
