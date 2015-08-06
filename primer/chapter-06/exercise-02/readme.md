Exercise 6.2
============

Indicate which of the following functions are in error and why. Suggest how you might correct the problems.

**(a)**

    int f() {
        string s;
        // ...
        return s;
    }

This function can't return s as a value because there is no defined conversion from string to int.

If s is a string that represents an integer value then it should be converted in some way that makes sense and then returned.

**(b)**

    f2(int i) { /* ... */ }

This function doesn't define a return type. If it doesn't want to return any value then it should be defined as void.

**(c)**

    int calc(int v1, int v2) { /* ... */ }

This function doesn't return a value, but it defined a return type other than void. So it either needs to return an int or be defined as void.

**(d)**

    double square(double x) return x * x;

A function must be defined with a body, even if they are just one line.

