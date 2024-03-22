#include <iostream>

int main()
{
    int a;
    std::cout << "enter number from 0 to N\n";
    std::cout << "N = ";
    std::cin >> a;

    const int N = a;

    int b = 0;

    std::cout << "for even numbers write 2, and for odd numbers write 1: ";
    std::cin >> b;

    for (int i = 1; i <= N; i++)
    {
        if (b == 2)
        {
            if ((i % 2) == 0)
            {
                std::cout << i << '\n';
            }
        }
        else if (b == 1)
        {
            if ((i % 2) == 1)
            {
                std::cout << i << '\n';
            }
        }
        else if ((b != 2) && (b != 1))
        {
            std::cout << "realy?";
            return 1;
        }
    }
    return 0;
}
