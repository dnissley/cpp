Exercise 2.15
=============

Which of the following definitions, if any, are invalid? Why?

**(a)** `int ival = 1.01;`

Valid -- but potentially problematic.

**(b)** `int &rval1 = 1.01;`

Invalid -- references must be initialized to an object. A literal is not an object.

**(c)** `int &rval2 = ival;`

Valid -- reference initialized to an object of the same type.

**(d)** `int &rval3;`

Invalid -- references must be initialized.

