Exercise 4.23
=============

The following expression fails to compile due to operator precedence. Using the operator precedence table, explain why it fails. How would you fix it?

    string s = "word";
    string pl = s + s[s.size() - 1] == 's' ? "" : "s";

I would guess that it won't compile because the + will evaluate before the conditional operator, which means you are concatenating s and s[s.size() - 1] and then comparing that to 's' which is an invalid comparison. You can't compare a string and a char, so the expression fails to compile.

