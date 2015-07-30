Exercise 4.15
=============

The following assignment is illegal. Why? How would you correct it?

    double dval; int ival; int *pi;
    dval = ival = pi = 0;

It's illegal because a pointer type can't be converted to an arithmetic type.

They probably meant to do:

    dval = ival = *pi = 0;

