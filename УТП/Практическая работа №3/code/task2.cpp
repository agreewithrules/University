#include <iostream>

int main(void)
{
    int a, b;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    if (a > b)
        std::cout << "a: " << a << std::endl;
    else
        std::cout << "b: " << b << std::endl;

    return 0;
}