#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main()
{   
    int n;
    int max {INT_MIN};

    cout << "Enter the n: ";
    cin >> n;

    int **matrix = new int*[n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int[n];

    srand(time(0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            matrix[i][j] = rand() % 10;

    int sum = 0;
    for (int i = 1; i < n; ++i)
    {
        sum = 0;
        for (int j = 0; j < n - i; ++j)
            sum += matrix[j][i + j];
        
        if (max < sum)
            max = sum;
    }

    for (int i = 1; i < n; ++i)
    {
        sum = 0;
        for (int j = 0; j < n - i; ++j)
            sum += matrix[j + i][j];
        
        if (max < sum)
            max = sum;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout.width(2);
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "Max sum: " << max << endl;
    return 0;
}