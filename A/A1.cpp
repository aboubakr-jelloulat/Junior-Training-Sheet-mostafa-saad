#include <iostream>
using namespace std;

int main(void)
{
	int 	game, D_counter = 0, A_counter = 0, i = 0; cin >> game;
	string	s;  cin >> s;

	while (s[i])
	{
		if (s[i] == 'A')
			A_counter++;
		if (s[i] == 'D')
			D_counter++;
		i++;
	}
	if (D_counter > A_counter)
		cout << "Danik" << endl;
	else if (D_counter < A_counter)
		cout << "Anton" << endl;
	else
		cout << "Friendship" << endl;

	return 0;
}
