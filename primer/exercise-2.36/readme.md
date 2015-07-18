Exercise 2.36
=============

In the following code, determine the type of each variable and the value each variable has when the code finishes:

    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

c is an int and it's final value is it's initial value + 1, so 4.

d is a reference to an int and it's final value is the same as the variable it is referring to, which is a. Incrementing d increments a so it's final value is also 4.

