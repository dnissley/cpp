Exercise 3.37
=============

What does the following program do?

    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

This program will not only print the characters stored in ca, it will continue until it hits a null shaped character in memory. This is, of course, an error.

