Exercise 4.18
=============

What would happen if the while loop below used the prefix increment operator?

    auto pbeg = v.begin();
    // print elements up to the first negative value
    while (pbeg != v.end() && *beg >= 0)
        cout << *pbeg++ << endl; // print the current value and advance pbeg

It would be incrementing the dereferenced value.

But that's not all. The loop would then never end because it would forever be operating on the first element of the vector.

