#include <iostream>
#include <iomanip>

int sum_col(const int (*arr)[3], int rows, int col)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
        sum += arr[i][col];
    
    return sum;
}

int main(void)
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            std::cin >> matrix[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << matrix[i][j] << ' ';
        std::cout << std::endl;
    }
    std::cout << "--------------------------" << std::endl;

    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        if (sum_col(matrix, 3, i) > max)
            max = sum_col(matrix, 3, i);
        
        std::cout << sum_col(matrix, 3, i) << ' ';
    }

    std::cout << std::endl << "Max value of sum_col: " << max << std::endl;
    return 0;
}