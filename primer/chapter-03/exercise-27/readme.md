Exercise 3.27
=============

Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.

    unsigned buf_size = 1024;

**(a)** `int ia[buf_size];`

Illegal because buf_size is not a constexpr.

**(b)** `int ia[4 * 7 - 14];`

Legal. An expression consisting of literals is a constexpr.

**(c)** `int ia[txt_size()];`

Legal if txt_size is defined as a constexpr. It probably isn't though, most functions aren't. So it's probably illegal.

**(d)** `char st[11] = "fundamental";`

Illegal because st isn't big enough to fit the implicit '\0' (null) at the end of string literals.

