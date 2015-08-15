Exercise 6.41
=============

Which, if any, of the following calls are illegal? Why? Which, if any, are legal but unlikely to match the programmer's intent? Why?

    char *init(int ht, int wd = 80, char bckgrnd = ' ');

**(a)** `init();`

Illegal because ht doesn't have a default value.

**(b)** `init(24, 10);`

Legal, bckgrnd takes the default value of the space character.

**(c)** `init(14, '*');`

Legal, but likely not the programmer's intent. '*' is converted to an int and is the value given to the int argument wd, not the value given to bckgrnd, which is an actual char.

