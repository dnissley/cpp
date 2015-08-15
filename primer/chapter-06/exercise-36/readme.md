Exercise 6.36
=============

Write the declaration for a function that returns a reference to an array of ten strings, without using either a trailing return, decltype, or a type alias.

    string s[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};

    string (*give_me_strings())[10] 
    {
        return &s;
    }

