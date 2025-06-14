#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	
	int n; cin >> n;
	string first, last;
	int count = 1;

	cin >> first;
	for (int i = 1; i < n; i++)
	{
		cin >> last;
		if (first != last)
		{
			count++;
			first = last;
		}
	}

	cout << count;

	return 0;
}
