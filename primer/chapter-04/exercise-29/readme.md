Exercise 4.29
=============

Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.

    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;

I predict that the first line printed will be 10 and the second line will be 2.

The first line shouldn't need any explanation. It's simply dividing the total size of the array by the size of the elements to get the number of elements in the array.

The second line is somewhat confusing because you have to think about the architecture of the machine you're running on. It's probably 64-bit in this day and age which means that the sizeof(p) will be 8 (64 bits). Then that gets divided by the sizeof(*p) which is probably 4 (32 bits).

