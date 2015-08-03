Exercise 4.34
=============

Give the variable definitions in this section, explain what conversions take place in the following expressions:

**(a)** `if (fval)` where fval is a float

fval is converted to a boolean, which is an integral type capable of representing the numbers 0 and 1. If fval is != 0 then it is true, otherwise it is false.

**(b)** `dval = fval + ival;` where dval is a double and ival is an int

First we attempt to add a float and an int. The compiler will avoid a narrowing conversion so will convert the int ival to a float.

Then we attempt to set a double variable equal to a float. So the float is promoted to a double with no loss of precision and that becomes the value of dval.

**(c)** `dval + ival * cval;` where cval is a char

ival and cval are multiplied first due to precedence. cval is promoted to the larger type of int and the result of the multiplication is an int.

Now we add dval to the int resulting from the multiplication. The compiler avoids a loss of precision by converting the int to a double. The result of the expression is then a double.

