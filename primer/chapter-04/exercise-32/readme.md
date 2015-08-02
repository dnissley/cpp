Exercise 4.32
=============

Explain the following loop.

    constexpr int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr)
        /* ... */

We initialize an array of 5 ints.

Then we start a loop by initializing ptr to point to the beginning of the array and ix to 0.

We check each time through the loop that ix is not equal to the size of the array and also that ptr does not point to ia plus 5 elements.

Then after each loop we increment ix and the ptr.

It seems that we are doing more work than is necessary because ix and ptr are being used for the exact same purpose.

