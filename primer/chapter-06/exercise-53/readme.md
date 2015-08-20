Exercise 6.53
=============

Explain the effect of the second declaration in each one of the following sets of declarations. Indicate which, if any, are illegal.

**(a)** 

    int calc(int&, int&);
    int calc(const int&, const int&);

The second declaration will cause calls involving references to int consts to match it better than the first declaration.

**(b)** 

    int calc(char*, char*);
    int calc(const char*, const char*);

The second declaration has the effect of making calls to calc with pointers to const chars match it better than the first declaration.

**(c)** 

    int calc(char*, char*);
    int calc(char* const, char* const);

The second declaration is illegal because the top-level const is discarded from arguments when being assigned to parameters, making these definitions equivalent and any call to calc ambiguous.

