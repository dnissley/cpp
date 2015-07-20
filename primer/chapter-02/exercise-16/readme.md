Exercise 2.16
=============

Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

    int i = 0, &r1 = i, double d = 0, &r2 = d;

**(a)** `r2 = 3.14159;`

Invalid -- references can't be reassigned.

**(b)** `r2 = r1;`

Invalid -- same thing as above.

**(c)** `i = r2;`

Valid -- copies the value of r2 (0) to  i.

**(d)** `r1 = d;`

Invalid -- references can't be reassigned.

