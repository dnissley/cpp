Exercise 2.2
============

To calculate a mortgage payment you would probably use a `double`. An integer type would truncate any decimal part of a calculation, so they would be inappropriate. You might be able to get away with using a `float`, and there probably wouldn't be a problem with using a `long double` either, but a `double` provides the best compromise of speed and accuracy.

I don't see any reason to use anything other than a `double` on each of the parts of a mortgage payment calculation. That seems to be overcomplicating the process.

