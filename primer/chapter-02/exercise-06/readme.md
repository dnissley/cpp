Exercise 2.6
============

What, if any, are the differences between the following definitions:

    int month = 9,  day = 7
    int month = 09, day = 07;

The difference is that the second line initializes the month and day variables to literals in octal format, aka base 8. 

But there is a problem with using `09` for the month because the maximum digit allowable in base 8 is 7. So this will cause a compiler error.

In this case, initializing the day to `07` is no different than setting it to 7.

