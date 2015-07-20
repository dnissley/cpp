Exercise 2.22
=============

Assuming p is a pointer to int, explain the following code:

    if (p) // ...
    if (*p) // ...

The first if statement will evaluate to true if p is not a null pointer.

The second if statement will evaluate to true if p the value being referenced by p is non-zero.

