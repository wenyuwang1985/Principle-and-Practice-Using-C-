#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    //define a inputwords
    vector<string> words;
    //define a unlikewords
    vector<string> unlike_words;
    //define bleep
    string bleep = "BLEEP";

    unlike_words.push_back("shopping");
    unlike_words.push_back("capitalism");

    //input words
    for(string word; cin >> word; words.push_back(word));

    vector<string>::iterator begin = words.begin();
    vector<string>::iterator end = words.end();
    sort(begin, end);

    //judge and output 
    for(; begin != words.end(); ++begin)
    {
        
        bool unlike;
        //judge unlike
        for(vector<string>::iterator unlike_begin = unlike_words.begin(); unlike_begin != unlike_words.end(); unlike_begin++)
        {
            if(*begin == *unlike_begin)
            {
                unlike = true;
                break;
            }
        }
        if(!unlike && (begin == words.begin() || *begin != *(begin-1)))
        {
            cout << *begin << endl;
        }
    }

}