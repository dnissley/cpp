Exercise 6.46
=============

Would it be possible to define isShorter as a constexpr? If so, do so. If not, explain why not.

It wouldn't be possible because the string's size function is not a constexpr function. You can only call other constexpr functions in the body of a constexpr functions.

