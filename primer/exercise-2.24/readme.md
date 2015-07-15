Exercise 2.24
=============

Why is the initialization of p legal but that of lp illegal?

    int i = 42;
    void *p = &i;
    long *lp = &i;

A void pointer can point at the address of any object of any type.

A long (or any other type) pointer can point only at the address of an object of it's own type.

