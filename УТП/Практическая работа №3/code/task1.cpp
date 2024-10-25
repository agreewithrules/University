#include <iostream>

int main(void)
{
    int a, b;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    int tmp = a;
    a = b;
    b = tmp;
    std::cout << "a: " << a << " " << "b: " << b << std::endl;

    return 0;
}