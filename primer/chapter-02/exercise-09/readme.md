Exercise 2.9
============

Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.

*(a)* `std::cin >> int input_value;`

Illegal, can't define a variable in a standard expression.

*(b)* `int i = { 3.14 };`

Illegal, narrowing conversion required.

*(c)* `double salary = wage = 9999.99;`

Legal, as long as wage has already been defined.

*(d)* `int i = 3.14;`

Legal, but perhaps unintentional and a bug waiting to happen.

