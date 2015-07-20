Exercise 2.14
=============

Is the following program legal? If so, what values are printed?

    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << std::endl;

The program is legal. The i defined in the for loop hides the outer i so sum will be set to the sum of values from 1 to 10 exclusive.

The output will be 100 because the for loop i no longer hides the i set to 100 outside of the for loop.

