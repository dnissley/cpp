Exercise 2.29
=============

Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

**(a)** `i = ic;`

Legal -- assigning the value of a const to a non-const.

**(b)** `p1 = p3;`

Illegal -- p3 is a const pointer to const int so we can't have p1 point to it because p1 is a non-const pointer to int.

(c) p1 = &ic;

Illegal -- p1 is a non-const pointer to int so we can't make it point to the address of a const int.

(d) p3 = &ic;

Illegal -- p3 is a const pointer so you can't reassign it to point at something else.

(e) p2 = p1;

Illegal -- same as above.

(f) ic = *p3;

Illegal -- can't reassign a const int to another value.

