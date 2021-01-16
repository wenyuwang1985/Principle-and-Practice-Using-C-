#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> words;
	//input words
	for(string word; cin >> word; words.push_back(word));
	cout << "word number is:" << words.size() << "\n";
	//sort words and output
	vector<string>::iterator begin = words.begin();
	vector<string>::iterator end = words.end();
	sort(begin, end);

	for(;begin != end; begin++)
	{
		if(begin == words.begin() || *begin != *(begin-1))
		{
			cout << *begin << endl;
		}
	}
}
