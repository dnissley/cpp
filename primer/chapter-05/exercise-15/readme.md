Exercise 5.15
=============

Explain each of the following loops. Correct any problems you detect.

**(a)** 

    for (int ix = 0; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
        // ...

ix is defined in the for control structure, so it is not accessible in the if that occurs after the loop body. This can be fixed by defining ix before the loop.

    int ix = 0;
    for (; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
        // ...

The if still does not make sense though, because in order to escape the loop (without breaking out of the body) ix will need to be equal to sz -- so the if body will never execute.

**(b)**

    int ix;
    for (ix != sz; ++ix) { /* ... */ }

ix is not initialized, so it's value is undefined. And it looks like the initialization statement is accidentally getting mixed up with the condition statement.

    int ix = 0;
    for (; ix != sz; ++ix) { /* ... */ }

**(c)** 

    for (int ix = 0; ix != sz; ++ix, ++sz) { /* ... */ }

I think the problem here is that ix and sz are being incremented at the same rate. So if they start out equal the loop will never execute. And if they start out unequal, the loop will be infinite.

