Exercise 6.52
=============

Given the following declarations,

    void manip(int, int);
    double dobj;

what is the rank of each conversion in the following calls?

**(a)** `manip('a', 'z');`

Rank is 3, through promotion.

**(b)** `manip(55.4, dobj);`

Rank is 4, though arithmetic conversion.

