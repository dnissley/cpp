Exercise 3.13
=============

Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

**(a)** `vector<vector<int>> ivec;`

This definition is legal. It creates an empty vector that holds objects of type vector<int>.

**(b)** `vector<string> svec = ivec;`

This definition is illegal. You can't initialize a vector of one type from a vector of another.

**(c)** `vector<string> svec(10, "null");`

This definition is legal. It creates a vector with ten string objects with the value "null".

