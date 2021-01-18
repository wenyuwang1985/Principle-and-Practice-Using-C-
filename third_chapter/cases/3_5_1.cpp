#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string pre = "";
    string current;
    string sum;
    string temp_sum;
    while(cin >> current)
    {
        string temp_current = current;
        //将字符串转为小写，避免因大小写影响检测
        transform(temp_current.begin(), temp_current.end(), temp_current.begin(), ::tolower);
        //give user a api of stop input string
        if(temp_current == "end")
        {
            break;
        }
        //
        if(temp_current != pre)
        {
            temp_sum.append(temp_current);
            sum.append(current);
            pre = temp_current;
        } 
    }
    //
    cout << sum << endl;
    //
    cout << temp_sum << endl;
}