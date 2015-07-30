Exercise 4.16
=============

Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.

**(a)** `if (p = getPtr() != 0)`

This will compare the result of getPtr() and 0 and evaluate to a boolean value which will then attempt to be assigned to p, which sounds like a pointer. That's illegal. And it probably won't compile because a bool can't be converted to a pointer type. The developer probably meant to assign the result of getPtr() to p and then ensure the result is not a null pointer:

    if ((p = getPtr()) != nullptr)

**(b)** `if (i = 1024)`

This will evaluate to true and assign 1024 to i. The developer probably meant to compare the equality of i and 1024:

    if (i == 1024)

