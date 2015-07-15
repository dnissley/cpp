Exercise 2.32
=============

Is the following code legal or not? If not, how might you make it legal?

    int null = 0, *p = null;

It's not legal because pointers must be initialized with a memory address, or nullptr/0.

