// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
int blin1(int a, int b)
{
    int c = a + b;
    return c;
}
int ppp()
{
    int pom;
    std::cin >> pom;
    if (pom == 3)
        std::cout << "Не два =!";
    else
        std::cout << "УВЫ";
}
int main()
{
    int a, b;
    bool c;
    std::cin >> a;
    std::cin >> b;
    if (blin1(0, 0) > 9)
        c = false;
    else
        c = true;
    if (c == false)
        std::cout << "ХАХАХАХАХа";
    if (c == true)
        std::cout << "АХАХАХХАХА";
}
