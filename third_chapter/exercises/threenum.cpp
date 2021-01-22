#include <iostream>
#include <string>

template <class a>
void three_num_sort(a& x, a& y, a& z)
{
    a temp;
    //max to end, two number compare
    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }    
    if(y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

}

int main()
{
    std::string a[3];
    std::cout << "Please input three numbers:";
    std::cin >> a[0] >> a[1] >> a[2];
    three_num_sort(a[0], a[1], a[2]);
    std::cout << a[0] << "\n"
            << a[1] << "\n"
            << a[2] << std::endl;
}