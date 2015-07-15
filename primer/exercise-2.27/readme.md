Exercise 2.27
=============

Which of the following initializations are legal? Explain why.

**(a)** `int i = -1, &r = 0;`

Illegal -- r is a reference to a const (0) and so must be defined as `const int &r = 0;`

**(b)** `int *const p2 = &i2;`

Legal -- p2 is a const pointer to i2, so this is legal so long as i2 is an int.

**(c)** `const int i = -1, &r = 0;`

Legal -- r is a reference to a const and defined correctly.

**(d)** `const int *const p3 = &i2;`

Legal -- p3 is a const pointer to a const int, so this is legal so long as i2 is an int (even a const int will work).

**(e)** `const int *p1 = &i2;`

Legal -- so long as i2 is an int or a const int.

**(f)** `const int &const r2;`

Illegal -- a reference is 'const' by default so there is no syntax that allows anything else, like this '&const'.

**(g)** `const int i2 = i, &r = i;`

Legal -- so long as i is an int or a const int.

