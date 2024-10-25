#include <iostream>
#include <math.h>

int main(void)
{
    int a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        int p = (a + b + c) / 2;
        int square = sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << "Square: " << square << std::endl;
    }
    else
    {
        std::cout << "Triangle doesnt exit";
    }

    return 0;
}