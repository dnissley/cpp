Exercise 6.38
=============

Revise the arrPtr function to return a reference to the array.

Original function:

    int odd[] = {1, 3, 5, 7, 9};
    int even[] = {0, 2, 4, 6, 8};
    
    decltype(odd) *arrPtr(int i)
    {
        return (i % 2) ? &odd : &even;
    }

Changing pointers to references:

    decltype(odd) &arrPtr(int i)
    {
        return (i % 2) ? odd : even;
    }

