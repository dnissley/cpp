Exercise 3.11
=============

Is the following range for legal? If so, what is the type of c?

    const string s = "Keep out!";
    for (auto &c : s) { /* ... */ }

It's legal, the type of c is reference to const char.

