Exercise 5.16
=============

The while loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally though of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

**Idiomatic while:**

    while (cin >> word) {
        if (word == "crackers")
            cout << "We got crackers!" << endl;
        else
            cout << "We got something else!" << endl;
    }

**Idiomatic for:**

    for (int i = 0; i < 10; ++i) {
        cout << i << " squared is " << i*i << endl;
    }

**Idiomatic while rewritten as for:**

    for (; cin >> word;) {
        if (word == "crackers")
            cout << "We got crackers!" << endl;
        else
            cout << "We got something else!" << endl;
    }

**Idiomatic for rewritten as while:**

    int i = 0;
    while (i < 10) {
        cout << i << " squared is " << i*i << endl;
        ++i;
    }

I'd choose while if I could only choose one loop to use. It seems to work well in scala.

