Exercise 6.15
=============

Explain the rationale for the type of each of find_char’s parameters In particular, why is s a reference to const but occurs is a plain reference? Why are these parameters references, but the char parameter c is not? What would happen if we made s a plain reference? What if we made occurs a reference to const?

`s` is a reference to const because the function doesn't modify the argument and copies of large strings can be expensive. Occurs is a plain reference because it must be modified as a part of the information returned by the function.

Parameter `c` is not a reference because the copy cost of a single character doesn't warrant making it a reference.

The function would not work if `occurs` was a reference to cost because then it couldn't be incremented with each occurence of `c`.

