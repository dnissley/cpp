Exercise 6.50
=============

Given the declarations for f from page 242, list the viable functions, if any for each of the following calls. Indicate which function is the best match, or if the call is illegal whether there is no match or why the call is ambiguous.

    void f();
    void f(int);
    void f(int, int);
    void f(double, double = 3.14);

**(a)** `f(2.56, 42)`

Viable functions are `f(double, double)` and `f(int, int)`.

For `f(double, double)` the call matches one argument exactly and one by conversion.

For `f(int, int)` the call matches one argument exactly and one by conversion.

Because for both of these functions, the match for each argument is no *better* than the match provided by the other, this function call is ambiguous.

**(b)** `f(42)`

Viable functions are `f(double, double)` and `f(int)`.

For `f(double, double)` the call matches the first argument by conversion and the second exactly (through the default parameter).

For `f(int)` the call matches exactly.

Because `f(int)` provides a better match for the first and only argument, and there are no other arguments that can be provided a worse match, `f(int)` is the best match.

**(c)** `f(42, 0)`

Viable functions are `f(double, double)` and `f(int, int)`.

For `f(double, double)` the call matches the first argument by conversion and the second argument by conversion.

For `f(int, int)` the call matches the first argument exactly and the second argument exactly.

So `f(int, int)` is the best match because it provides a better match than `f(double, double)` for both arguments.

**(d)** `f(2.56, 3.14)`

Viable functions are `f(double, double)` and `f(int, int)`.

For `f(double, double)` the call matches the first argument exactly and the second argument exactly.

For `f(int, int)` the call matches the first argument by conversion and the second argument by conversion.

So `f(double, double)` is the best match because it provides a better match than `f(int, int)` for both arguments.

