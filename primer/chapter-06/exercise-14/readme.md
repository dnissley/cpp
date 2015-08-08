Exercise 6.14
=============

Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.

A parameter should be a reference type if the function does not modify the argument, or when the type can be particularly large and copies therefore expensive.

A parameter should not be a reference type if the function intends to make modifications to the argument and that could be surprising to the user of the function.

