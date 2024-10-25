#include <iostream>

int main(void)
{
    int arr[10];

    for (int i = 0; i < 10; i++)
        std::cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < 10; i++)
        if (arr[i] % 3 == 0)
            sum += arr[i];

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
