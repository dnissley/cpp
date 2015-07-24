Exercise 3.34
=============

Given that p1 and p2 point to elements in the same array, what does the following code do?

    p1 += p2 - p1;

This basically makes the value of p1 equal to that of p2.

First p1 is subtracted from p2. That value is the distance between p1 and p2, of type ptrdiff_t.

Then that value is added to p1, generally making p1 == p2.

The result of the first subtraction has the potential to be negative if p2 points to an element before p1. This would mean that value is undefined.

If p2 points to an element after p1, then this operation is completely safe.

