#include <iostream>

int main()
{
    std::cout << "Please input a number of mile:";
    double mile;
    std::cin >> mile;
    std::cout << "mile is " << (mile * 1.609) << std::endl;
}