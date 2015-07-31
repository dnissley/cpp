Exercise 4.20
=============

Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.

**(a)** `*iter++;`

This legal expression will increment the iterator and dereference the string it points to.

**(b)** `(*iter)++;`

This illegal expression will dereference the string pointed to and then attempt to increment the string. Strings don't support increment operations though.

**(c)** `*iter.empty();`

This illegal expression attempts to call a function belonging to the iterator called `empty()`. Iterators don't have an `empty()` function though.

**(d)** `iter->empty();`

This legal expression calls the referenced string's `empty()` function.

**(e)** `++*iter;`

This illegal expression will dereference the string pointed to and then attempt to increment the string. Strings don't support increment operations though.

**(f)** `iter++->empty();`

This legal statement will increment the iterator, but evaluate to the value pointed to before the increment. So when empty is called on the result it is being called on whatever iter was pointing to at first.

