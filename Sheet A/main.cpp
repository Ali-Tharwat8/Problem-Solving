#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string one, two;
	cin >> one >> two;
	int i = 0;
	for (; i < one.size(); i++)
	{
		if (tolower(one.at(i)) != tolower(two.at(i)))
		{
			if (tolower(one.at(i)) > tolower(two.at(i)))
			{
				cout << 1;
				break;
			}
			else if (tolower(one.at(i)) < tolower(two.at(i)))
			{
				cout << -1;
				break;
			}
		}
	}

	if (i == one.size())
		cout << 0;
	return 0;
}
