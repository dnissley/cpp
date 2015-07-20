Exercise 2.33
=============

Using the variable definitions from this section:

    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    
    const auto g = ci;

Determine what happens in each of these assignments:
    
    a = 42; b = 42; c = 42;
    d = 42; e = 42; g = 42;

a is simply an int, so the assignment makes a's value 42.

b is also an int, so the assignment makes b's value 42.

c is also an int, so the assignment makes c's value 42.

d is a pointer to int, so the assignment is an error because it would set the address to the integer 42 which is obviously not what was intended. Perhaps *d = 42 was what was intended, and this would work fine for d as well as e.

e is a pointer to const int, so the assignment is an error because it would set the address to the integer 42 which is obviously not what was intended.

g is a const int, so the assignment is an error because you can't reassign a const. Duh.
 
