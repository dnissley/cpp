Exercise 4.7
============

What does overflow mean? Show three expressions that will overflow.

Overflow is exceeding the defined range of a signed integral type.

    int i1 = 2147483648; // overflow on the lower bound
    int i2 = -2147483649; // overflow on the upper bound
    int i3 = 2147483647;
    int i4 = i3 + 1; // overflow on the upperbound
    int i5 = -i3 - 2; // overflow on the lowerbound

