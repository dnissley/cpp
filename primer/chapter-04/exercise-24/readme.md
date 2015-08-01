Exercise 4.24
=============

Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that expression would be evaluated if the operator were left associative?

Let's take a look at the expression:

    finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

As a right associative operator, the conditional expression looks like:

    finalgrade = (grade > 90) ? "high pass" : ( (grade < 60) ? "fail" : "pass" );

As a left associative operator, the conditional expression would look like:

    finalgrade = ( (grade > 90) ? "high pass" : (grade < 60) ) ? "fail" : "pass";

But that's just downright wrong and weird.
 
