Exercise 6.35
=============

In the call to factorial, why did we pass val - 1 rather than val--?

val-- would cause the recursive call to operate on the current value of val so it would never decrease -- causing an infinite loop.

