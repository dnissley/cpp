Exercise 6.48
=============

Explain what this loop does and whether it is a good use of assert:

    string s;
    while (cin >> s && s != sought) {}
    assert(cin);

This loop reads words from standard in until it finds a word it's looking for, `sought`, or until the end of input, or potentially both.

This is a bad use of assert because what is being asserted could easily be false.

