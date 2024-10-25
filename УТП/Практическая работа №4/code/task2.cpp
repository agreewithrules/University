#include <iostream>

int main(void)
{   
    int arr[10];

    for (int i = 0; i < 10; i++)
        std::cin >> arr[i];

    std::cout << "Even index: ";
    for (int i = 0; i < 10; i += 2)
        std::cout << arr[i] << ' ';

    std::cout << std::endl;
    std::cout << "Odd index: ";
    for (int i = 1; i < 10; i += 2)
        std::cout << arr[i] << ' ';

    return 0;
}
