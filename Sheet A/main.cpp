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
	int count = 0;
	char prev;
	cin >> prev;
	char current;
	for (int i = 1; i < n; i++)
	{
		cin >> current;
		if (current == prev)
		{
			count++;
		}
		prev = current;
	}
	cout << count;

	return 0;
}
