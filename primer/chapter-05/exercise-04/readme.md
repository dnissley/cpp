Exercise 5.4
============

Explain each of the following examples, and correct any problems you detect.

**(a)** `while (string::iterator iter != s.end()) { /* ... */ }`

`iter` is defined in the control structure but not initialized and immediately used in a comparison, making this statement a compile-time error.

We can fix this problem by defining and initializing `iter` outside of the while loop:

    string::iterator iter = s.begin()
    while (++iter != s.end()) { /* ... */ }

**(b)** `while (bool status = find(word)) { /* ... */ }`

`status` is defined in the control structure and initialized to the value returned by the find function each time through the loop, making this loop perfectly legal.

