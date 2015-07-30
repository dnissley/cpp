Exercise 4.19
=============

Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?

**(a)** `ptr != 0 && *ptr++`

Evaluates to true if ptr is not a null pointer and the ptr points to a non-zero int.

**(b)** `ival++ && ival`

Evaluates to true if the current and incremented values of ival are non-zero.

**(c)** `vec[ival++] <= vec[ival]`

This is undefined because the <= operator makes no guarantees about the order in which it's operands are evaluated.

