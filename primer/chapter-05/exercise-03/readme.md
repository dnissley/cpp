Exercise 5.3
============

Use the comma operator to rewrite the while loop presented here so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.

    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }

Rewritten:

    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;

This form is less readable due to all of the statements being on one line.

