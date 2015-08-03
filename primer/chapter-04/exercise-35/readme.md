Exercise 4.35
=============

Given the following definitions,

    char cval; int ival; unsigned int ui;
    float fval; double dval;

identify the implicit type conversions, if any, taking place:

**(a)** `cval = 'a' + 3;`

The char 'a' is promoted to an int to match the int literal 3. Then the result is a potential overflow error involving assigning an int to a char. But the ascii value of 'a' is 97 so adding 3 would result in 100 -- no overflow error.

**(b)** `fval = ui - ival * 1.0;`

ival is multiplied by a literal decimal, which by default is a double type, so the result is that ival is converted to a double and then multiplied by 1.0 resulting in no change besides the conversion. The result is then subtracted from ui, which is converted to a double. The resulting double is then assigned to fval, with possible loss of precision.

**(c)** `dval = ui * fval;`

ui is converted to a float to avoid loss of precision. The resulting float is then assigned to a double, which means it first gets promoted to a double. Float is a less precise type than double, so there is no loss of precision.

**(d)** `cval = ival + fval + dval;`

+ is left associative so ival and fval are grouped together. ival is promoted to a float and the result is a float. Then it is added to a double, but first the left hand operand is promoted with no loss of precision. The resulting double is then assigned to a char, with possible loss of precision.

