#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;

	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if ((x || y) && (y || z) && (x || z))
			count++;
	}

	cout << count;
	return 0;
}
