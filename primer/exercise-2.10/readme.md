Exercise 2.10
=============

What are the initial values, if any, of each of the following variables?

    std::string global_str;
    int global_int;
    int main()
    {
        int local_int;
        std::string local_str;
    }

Uninitialized strings are set to "" by default so that is the value of global_str and local_str. This is behavior defined by the std::string class.

Because global_int is uninitialized and defined outside a function body, it is initialized to 0.

Because local_int is uninitialized and defined inside a function body, it's initial value is undefined.

