Exercise 4.12
=============

Assuming i, j, and k are all ints, explain what `i != j < k` means.

The `j < k` is evaluated first and it's result is a boolean. 

That boolean is then converted to an int, 1 if it's true and 0 if it's false.

That int is then compared to i.

If i is 1 and j < k is true then this condition will be false.

If i is 0 and j < k is false then this condition will be false.

Otherwise this condition will be true.

