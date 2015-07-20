#include <iostream>

int main()
{
    const int i = 42;

    auto j = i;          // j is an int
    const auto &k = i;   // k is a reference to const int, but it would be even without the leading (low-level) const
    auto *p = &i;        // p is a pointer to const int

    // Let's prove to ourselves that these deductions of ours are correct

    j = 43; // because j is an int we should just be able to reassign it at will
    //int *ktest = &k; // if k was just a reference to int then it would be possible to point at it with a plain pointer to int, but this is not possible
    p = &k; // because p is a pointer to const int we can have it point at another int value, in this case a const int

    // it should go without saying that the leading const applies to both j2 and k2
    const auto j2 = i, &k2 = i;   // j2 is a const int and k2 is a reference to const int, although the leading const is redundant just as before

    // Let's prove the other deductions are correct

    //j2 = 43; // because j is a const int this statement is a compiler error
    //int *k2test = &k2; // k2 is the same as k basically so this statement is an error

    return 0;
}

