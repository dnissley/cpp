Exercise 3.19
=============

List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.

**Method 1**

    vector<int> v(10, 42);

**Method 2**

    vector<int> v {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

**Method 3**

    vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(42);

The preferred way is method 1 because it is most efficient.

