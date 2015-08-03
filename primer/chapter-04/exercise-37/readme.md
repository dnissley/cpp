Exercise 4.37
=============

Rewrite each of the following old-style casts to use a named cast:

    int i; double d; const string *ps; char *pc; void *pv;

**(a)** `pv = (void*)ps;`

    pv = const_cast<string*>(ps);

**(b)** `i = int(*pc);`

    i = static_cast<int>(*pc);

**(c)** `pv = &d;`

    pv = static_cast<void*>(&d);

**(d)** `pc = (char*) pv;`

    pc = reinterpret_cast<char*>(pv);

