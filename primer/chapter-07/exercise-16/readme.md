Exercise 7.16
=============

What, if any, are the constraints on where and how often an access specifier may appear inside a class definition? What kinds of members should be defined after a public specifier? What kinds should be private?

There are no constraints on where and how often an access modifier may appear inside a class definition, except that they must occur outside of function bodies.

Public members should include any parts of a class that would be considered part of it's interface, which is basically the minimum set of operations required by a user of the class to make it useful in the intended manner. Public members expose what a class does, not how it works underneath the surface of it's interface.

Private members should include implementation specific values. If meddled with outside the bounds of the class these values are likely to cause undefined behavior. Private members expose how a class works underneath the surface of it's interface.

