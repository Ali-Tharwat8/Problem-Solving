#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int Anton = 0, Danik = 0;
	char c;
	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		if (c == 'A')
			Anton++;
		else
			Danik++;
	}

	if (Anton > Danik)
		cout << "Anton";
	else if (Danik > Anton)
		cout << "Danik";
	else
		cout << "Friendship";

	return 0;
}
