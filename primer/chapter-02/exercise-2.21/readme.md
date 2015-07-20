Exercise 2.21
=============

Explain each of the following definitions. Indicate whether any are illegal and, if so, why.

    int i = 0;

**(a)** `double *dp = &i;`

Initializes dp to point at the address of i.

This is illegal because the value a pointer points at must have the same type as the pointer.

**(b)** `int *ip = i;`

This is illegal because you can't initialize a pointer to point at the value of a variable. It needs to point at the address of another variable instead.

**(c)** `int *p = &i;`

Legal. Initializes pointer p to point at the address of i. They are both of type int.

