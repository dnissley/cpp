Exercise 6.17
=============

Write a function to determine whether a string contains any capital letters.

    bool any_capitals(const string& s) {
        for (auto c : s) {
            if (c >= 'A' && c <= 'Z') {
                return true;
            }
        }
        return false;
    }

Write a function to change a string to all lowercase.

    void to_lowercase(string& s) {
        for (auto &c : s) {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
        }
    }

Do the parameters you used in these function have the same type? If so, why? If not, why not?

No they do not have the same type because the second function needs to modify the string taken as a parameter.

