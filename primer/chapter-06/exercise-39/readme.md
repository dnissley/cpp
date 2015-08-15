Exercise 6.39
=============

Explain the effect of the second declaration in each one of the following sets of declarations. Indicate which, if any, are illegal.

**(a)** 

    int calc(int, int);
    int calc(const int, const int);

Defines an overload of the original calc function that takes const int arguments.

**(b)** 

    int get();
    double get();

Illegal. Defines a function with the same name and parameter list with a different return type. Return type is not enough to differentiate a function when overloading.

**(c)**

    int *reset(int *);
    double *reset(double *);

Defines an overload of the reset function that takes a pointer to a double and returns a pointer to double.

