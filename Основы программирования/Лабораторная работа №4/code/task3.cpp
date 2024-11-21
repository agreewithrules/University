#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[10][10];
    int (*ptr_arr)[10] = arr;
    int *ptr = *ptr_arr;
    int min {INT_MAX};
    

    srand(time(0));
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
            *ptr++ = rand() % 100 - 50;
    ptr_arr++;
    ptr = *ptr_arr;
    }
    
    ptr_arr = arr;
    ptr = *ptr_arr;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {   
            if (*ptr < min)
                min = *ptr;

            cout.width(3);
            cout << *ptr++ << ' ';
        }
        cout << endl;
        ptr_arr++;
        ptr = *ptr_arr;
    }

    cout << "Min value: " << min << endl;
    return 0;
}