#include <iostream>
using namespace std;

int main(void)
{
	string s1; cin >> s1;
	string s2; cin >> s2;

	for (int i = 0; i < s1.length(); i++)
	{
		char c1 = tolower(s1[i]);
		char c2 = tolower(s2[i]);
	
		if (c1 < c2)
		{
			cout << -1;
			return 0;
		}
			
		if (c1 > c2)
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;

	return 0;
}
