#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Please enter a floating-point value:";
    double n;
    cin >> n;
    cout << "n = " << n
        << "\nn+1 = " << n+1
        << "\nthree times n = " << 3*n
        << "\ntwice n = " << n+n
        << "\nhalf of n = " << n/2
        << "\nsquare root of n = " << sqrt(n) << endl;
    int x;
    cout << "Please enter a int value:";
    cin >> x;
    cout << "half of x = " << x/2
        << "\nsquare root of x = " << sqrt(x) << endl; 
}