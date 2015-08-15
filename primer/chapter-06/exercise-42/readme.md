Exercise 6.42
=============

Give the second parameter of make_plural a default argument of 's'. Test your program by printing singular and plural versions of the words success and failure.

    // return the plural version of word if ctr is greater than 1
    string make_plural(size_t ctr, const string &word,
                               const string &ending = "s")
    {
        return (ctr > 1) ? word + ending : word;
    }

Obviously "s" is the wrong ending for the plural of "success". But "s" works for many, if not most, words.

