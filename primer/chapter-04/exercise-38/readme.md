Exercise 4.38
=============

Explain the following expression:

    double slope = static_cast<double>(j/i);

The intention here was probably to avoid truncation, but it does not do that.

j and i are divided, and the result is a truncated int which is then cast to a double.

