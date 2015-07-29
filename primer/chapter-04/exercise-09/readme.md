Exercise 4.9
============

Explain the behavior of the condition in the following if:

    const char *cp = "Hello World";
    if (cp && *cp)

The if will evaluate to true because cp is a non-null pointer and the value that cp is pointing to is not an empty string (consisting of just '\0').

