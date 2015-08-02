Exercise 4.33
=============

Using the operator precedence table, explain what the following expression does:

    someValue ? ++x, ++y : --x, --y

It does this:

    (someValue ? (++x, ++y) : --x), --y

Because the comma operator has the lowest precedence of all operators.

