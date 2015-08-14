Exercise 6.29
=============

When you use an initializer_list in a range for would you ever use a reference as the loop control variable? If so, why? If not, why not?

Yes, you might, because by using a reference you can avoid copying each element of the initializer_list into the loop control variable each time through the loop.

