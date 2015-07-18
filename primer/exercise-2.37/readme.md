Exercise 2.37
=============

Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;

c is an int with the value 3;
d is a reference to int bound to a, whose value is 3.

