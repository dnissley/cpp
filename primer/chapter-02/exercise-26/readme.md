Exercise 2.26
=============

Which of the following are legal? For those that are illegal, explain why.

**(a)** `const int buf;`

Illegal, const variables must be initialized.

**(b)** `int cnt = 0;`

Legal.

**(c)** `const int sz = cnt;`

Legal.

**(d)** `++cnt; ++sz;`

The `++sz` expression is illegal because it attempts to modify a const variable.

