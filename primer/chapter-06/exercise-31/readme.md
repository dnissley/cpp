Exercise 6.31
=============

When is it valid to return a reference? A reference to const?

You can only return a reference to a value if it existed before the function call, so it must be a global value or a reference to a parameter (or part of a parameter). The same applies to references to const.

