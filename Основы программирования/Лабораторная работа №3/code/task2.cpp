#include <iostream>
#include <random>

int main(void)
{
    int arr[3], matrix[3][3];

    srand(time(0));
    for (int i = 0; i < 3; i++)
        arr[i] = rand() % 50;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = arr[(i + j) % 3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << matrix[i][j] << ' ';
        std::cout << std::endl;
    } 
    return 0;
}