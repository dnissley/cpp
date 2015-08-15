Exercise 6.40
=============

Which, if either, of the following declarations are errors? Why?

**(a)** `int ff(int a, int b = 0, int c = 0);`

**(b)** `char *init(int ht = 24, int wd, char backgrnd);`

The second declaration is an error because the default arguments aren't used on trailing parameters.

`wd` and `backgrnd` also need defaults for it to be legal.

