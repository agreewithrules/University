#include <random>
#include <iostream>


double frand(void)
{   
    double num;
    num = 3.0 + (double)(rand() % 100 - 50) / 100 - rand() % 6;
    return num;
}


int main()
{   
    int n;
    srand(time(0));

    std::cout << "Enter the length: ";
    std::cin >> n;
    double* arr = new double[n];

    for (int i = 0; i < n; i++)
        arr[i] = frand();

    for (int i = 0; i < n; i++)
        if (fabs(arr[i]) < 1)
            arr[i] = 0;
    
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
    
    return 0;
}