#include <iostream>

int main(void)
{
    int x, y, r;
    // double tochki[5][5] = {{0.5, 0.5}, {0.7, -0.1}, {1, 1.1}, {-2, 0}, {-1, 0.5}};

    std::cout << "Enter x, y and radius: ";
    std::cin >> x >> y >> r;

    int n;
    std::cout << "Enter n: ";
    std::cin >> n;



    int count  = 0;
    for (int i = 0; i < n; i++)
    {   
        double coords[2];
        std::cin >> coords[0] >> coords[1];
        if (coords[0] * coords[0] + coords[1] * coords[1] <= r * r)
            count += 1;
    }
    std::cout << count << std::endl;
    return 0;
}