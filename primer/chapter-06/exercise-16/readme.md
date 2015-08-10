Exercise 6.16
=============

The following function, although legal, is less useful than it might be. Identify and correct the limitation on this function:

    bool is_empty(string& s) { return s.empty(); }

`s` should be defined as `const string& s` as it will allow passing in a `const string` from some other function that might take a `const string`. The function doesn't change `s` so it should make that intent explicit.

