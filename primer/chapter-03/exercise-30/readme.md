Exercise 3.30
=============

Identify the indexing errors in the following code:

    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;

The developer probably thought that 1 is the first element of an array, but it is zero, so ix should be initialized to zero.

They also thought that array_size was the last element of the array, but it is array_size - 1, so the check should be ix < array_size.

