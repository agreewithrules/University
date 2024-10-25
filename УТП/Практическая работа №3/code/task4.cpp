#include <iostream>

int main(void)
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    int sum = 0;
    for (; n; n--)
        sum += n;

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}