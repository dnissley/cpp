Exercise 2.5
============

Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:

*(a)* `'a'`, `L'a'`, `"a"`, `L"a"`

The first literal is a char.

The second literal is a wchar_t, a wide char.

The third literal is a string of char, aka char array, aka char[1].

The fourth literal is a string of wide characters, aka wchar_t[1].

*(b)* `10`, `10u`, `10L`, `10uL`, `012`, `0xC`

The first literal is an int.

The second literal is an unsigned int.

The third literal is a long.

The fourth literal is an unsigned long.

The fifth literal is the int 10 in octal form.

The sixth literal is the int 12 in hexadecimal form.

*(c)* `3.14`, `3.14f`, `3.14L`

The first literal is a double.

The second literal is a float.

The third literal is a long double.

*(d)* `10`, `10u`, `10.`, `10e-2`

The first literal is an int.

The second literal is an unsigned int.

The third literal is a double.

The fourth is a double in scientific notation.

