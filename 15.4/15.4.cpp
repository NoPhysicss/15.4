#include <iostream>

void odd(const int N)
{
    for (int i = 1; i <= N; i++)
    {
        if ((i % 2) == 1)
        {
            std::cout << i << " | ";
        }
    }
}
void writh(const int N)
{
    for (int i = 1; i <= N; i++)
    {
        if ((i % 2) == 0)
        {
            std::cout << i << " | ";
        }
    }
}

int main()
{
    int a = 0;
    std::cout << "enter number from 0 to N\n";
    std::cout << "N = ";
    std::cin >> a;


    int b = 0;

    std::cout << "for even numbers write 2, and for odd numbers write 1: ";
    std::cin >> b;


        if (b == 2)
        {
            writh(a);
        }
        else if (b == 1)
        {
            odd(a);
        }
        else if ((b != 2) && (b != 1))
        {
            std::cout << "realy?";
            return 1;
        }
    return 0;
}
