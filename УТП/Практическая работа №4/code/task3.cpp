#include <iostream>
#include <iomanip>
#include <random>

int main(void)
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix[i][j] = rand();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << std::setw(6) << matrix[i][j] << ' ';
        std::cout << std::endl;
    }
    
    int max = matrix[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] > max)
                max = matrix[i][j];
    
    std::cout << "Max value: " << max << std::endl;

    return 0;
}