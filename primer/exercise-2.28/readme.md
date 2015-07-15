Exercise 2.28
=============

Explain the following definitions. Identify any that are illegal.

**(a)** `int i, *const cp;`

Illegal -- cp must be initialized because it is a const pointer.

**(b)** `int *p1, *const p2;`

Illegal -- for the same reason as above.

**(c)** `const int ic, &r = ic;`

Illegal -- ic must be initialized because it is a const.

**(d)** `const int *const p3;`

Illegal -- p3 must be initialized because it is a const pointer.

**(e)** `const int *p;`

Legal -- because although p is a pointer to a const int, it doesn't need to be initialized because it can be reassigned.

