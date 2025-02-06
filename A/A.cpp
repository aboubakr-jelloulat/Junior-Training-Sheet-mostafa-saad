#include <iostream>

using namespace std;

int main(void)
{
	int n, h, sum = 0;  cin >> n >> h;

	while (n--)
	{
		int person_h; cin >> person_h;
		if (person_h > h)
			sum += 2;
		else 
			sum += 1;

	}
	cout << sum;

	return 0;
}
