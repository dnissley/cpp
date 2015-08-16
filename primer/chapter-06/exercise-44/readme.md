Exercise 6.44
=============

Rewrite the isShorter function to be inline.

Original function:

    bool isShorter(const string &s1, const string &s2)
    {
        return s1.size() < s2.size();
    }

Rewritten:

    inline bool isShorter(const string &s1, const string &s2)
    {
        return s1.size() < s2.size();
    }

