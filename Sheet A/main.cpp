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
	
	int current, police = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> current;
		if (current != -1)
			police += current;
		else
		{
			if (police)
				police--;
			else
				count++;
		}
	}
	cout << count;
	return 0;
}
