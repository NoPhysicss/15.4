#include <iostream>

void nums(const int N, bool tf)
{
    for (int i = tf; i <= N; i += 2)
    {
        std::cout << i << " | ";
    }
}


int main()
{
    int n = 0;
    std::cout << "enter number from 0 to N\n";
    std::cout << "N = ";
    std::cin >> n;


     std::string userinput;
     bool tf;

    std::cout << "for even numbers write |false|, and for odd numbers write |true|: ";
    std::cin >> userinput;

    if (userinput == "false")
    {
        tf = false;
    }
    else if (userinput == "true")
    {
        tf = true;
    }
    else
    {
        std::cout << "realy?";
        return 1;
    }

    nums(n, tf);

    return 0;
}
