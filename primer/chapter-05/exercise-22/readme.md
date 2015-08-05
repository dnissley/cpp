Exercise 5.22
=============

The last example in this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto.

Original code:

    begin:
    int sz = get_size();
    if (sz <= 0) {
        goto begin;
    }

Rewritten using a loop:

    for (int sz = get_size(); sz <= 0;)
        sz = get_size();

