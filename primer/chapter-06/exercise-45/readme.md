Exercise 6.45
=============

Review the programs you've written for the earlier exercises and decide whether they should be defined as inline. If so, do so. If not, explain why they should not be inline.

The recursive version of the factorial function should not be written as inline because inline recursive functions are less likeley to be honored by the compiler. The iterative version of the factorial function could be written as inline if performance was an issue.

