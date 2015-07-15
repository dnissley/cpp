Exercise 2.31
=============

Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

    r1 = v2;

Legal -- sets v1 = 0 because r1 is a reference to v1.

    p1 = p2; 

Illegal -- p1 doesn't share the top-level const of p2.

    p2 = p1;

Legal -- although p2 has a top-level const and p1 doesn't, a top-level const can still point at a non-const object.

    p1 = p3; 

Illegal -- p1 doesn't share the top-level const of p3.

    p2 = p3

Legal -- p2 doesn't share the low-level const of p3 but it shares the top-level const so this is perfectly ok.

