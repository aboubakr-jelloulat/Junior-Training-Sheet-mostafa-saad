#include <iostream>
using namespace std;

int main(void)
{
	int cases, push = 0; cin >> cases;
	while (cases--)
	{
		int counter = 0;
		for (int i = 0; i < 3; i++)
		{
			int nb; cin >> nb;
			if (nb == 1)
			{
				counter++;
			}
		}
		if (counter >= 2)
		{
			push++;
		}
	}
	cout << push << endl;

	return 0;
}
