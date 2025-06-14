#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int count = 0;

	while (x <= y)
	{
		count++;
		x *= 3;
		y *= 2;
	}
	cout << count;
	return 0;
}
