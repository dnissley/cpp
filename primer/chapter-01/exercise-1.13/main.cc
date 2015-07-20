#include <iostream>

int main() 
{
    int i;
    int sum = 0;

    for (i = 50; i <= 100; ++i)
        sum += i;

    std::cout << "Sum of 50 to 100 inclusice is " << sum << std::endl;

    std::cout << std::endl;

    std::cout << "Counting down..." << std::endl;

    for (i = 10; i >= 0; --i) {
       std::cout << i << std::endl;
    }
}
