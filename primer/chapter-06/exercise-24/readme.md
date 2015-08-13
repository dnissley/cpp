Exercise 6.24
=============

Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.

    void print(const int ia[10])
    {
        for (size_t i = 0; i != 10; ++i)
            cout << ia[i] << endl;
    }

The problem with this function is that it probably expects the compiler to check that any array passed to it has a length of 10. But the compiler completely ignores the length of the array in the parameter and converts it to the type `int *ia`.

The way to fix this is either to add an explicit length parameter of size_t or to add another `const *int` pointer that is expected to be filled in with a pointer to one past the last element of the array.

