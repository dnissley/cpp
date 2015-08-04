Exercise 5.8
============

What is a "dangling else"? How are else clauses resolved in C++?

A dangling else is an else for which it is not clear what branch of an if it was intended to branch off of.

The indentation of this if statement demonstrates that the developer intends for the else to branch off of the first if, not the second.

    if (something)
        if (something_else)
            do_this();
    else
        do_that();

But the else actually applies to the second if.

    if (something)
        if (something_else)
            do_this();
        else
            do_that();

This is because C++ binds each else with the closest if, unless broken up by a block.

