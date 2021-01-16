#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
    //define temperature vector
    std::vector<double> temps;
    //input temperature by user
    for(double temp; std::cin >> temp; temps.push_back(temp));

    double sum = 0;
    for(int i = 0; i < temps.size(); i++)
    {
        sum += temps.at(i);
    }
    /*
    for(int x : temps)
    sum += x;
    */
    
    //count average
    std::cout << sum / temps.size() << "\n";
    //count midian
    std::vector<double>::iterator first = temps.begin();
    std::vector<double>::iterator end = temps.end();
    std::sort(first, end);
    std::cout << temps.at(temps.size() / 2) << std::endl;
    std::cout << temps.size() << "\n";

}
