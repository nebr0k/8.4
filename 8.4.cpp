#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'b')
			pos++;
		if (s[pos] == 'c')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find("abc", pos)) != -1)
	{
		s.replace(pos, 3, "**");
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Number of occurrences " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string: " << dest << endl;

		return 0;
}