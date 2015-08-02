Exercise 4.31
=============

The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

Original program:

    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;

Rewritten to use postfix:

    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)

There is no difference between the two in this case. Using prefix operators is preferred for performance and convention.

