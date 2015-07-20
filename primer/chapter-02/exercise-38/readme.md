Exercise 2.38
=============

Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce different types.

Same: `int a = 1;  auto b = a;  decltype(a) c = 100;`

Different: `int a = 1; auto b = a; decltype((a)) c = b;`

