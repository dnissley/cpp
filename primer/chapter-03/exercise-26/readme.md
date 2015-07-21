Exercise 3.26
=============

In the binary search program on page 112, why did we write `mid = beg + (end - beg) / 2;` instead of `mid = (beg + end) / 2;`?

We wrote `mid = beg + (end - beg) / 2;` because there is no operation defined for adding two iterators. The expression `beg + end` is illegal.

