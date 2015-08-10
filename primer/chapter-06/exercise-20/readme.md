Exercise 6.20
=============

When should reference parameters be references to const? What happens if we make a parameter a plain reference when it could be a reference to const?

Reference parameters should be references to const when they do not make changes to the parameter. If you make a parameters a plain reference when it could be a reference to const it communicates ambiguous intent and it also prevents a const value from being passed to the function without copying.

