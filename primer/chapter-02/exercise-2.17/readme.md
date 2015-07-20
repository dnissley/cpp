Exercise 2.17
=============

What does the following code print?

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << std::endl;

It prints "10" because the assignment to ri acts on i and it was the last thing to happen before printing.

