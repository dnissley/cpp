Exercise 6.43
=============

Which one of the following declarations and definitions would you put in a header? In a source file? Explain why.

**(a)** `inline bool eq(const BigInt&, const BigInt&) { ... }`

I would put this function definition in a header, because it is marked inline, but of course parameter names must be given.

**(b)** `void putValues(int *arr, int size);`

I would put the definition for this function in a source file, because it is not marked inline. This declaration would go in a header though.

