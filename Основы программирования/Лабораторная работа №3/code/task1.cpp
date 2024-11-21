#include <iostream>

int main(void)
{
    int arr[2][3] = {};
    int l_pos, f_neg = 0;
    int i_pos, j_pos, i_neg, j_neg;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            std::cin >> arr[i][j];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
    {
        if (f_neg == 0 && arr[i][j] < 0)
        {
            f_neg = arr[i][j];
            i_neg = i;
            j_neg = j;
        }
        if (arr[i][j] > 0)
        {    
            l_pos = arr[i][j];
            i_pos = i;
            j_pos = j;
        }
    }
            
    std::cout << "First_negative: " << f_neg << " | i: " << i_neg << " j: " << j_neg << std::endl;
    std::cout << "Last positive: " << l_pos << " | i: " << i_pos << " j: " << j_pos << std::endl;

    return 0;
}