#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int h, n;
	cin >> n >> h;

	int hight;
	int width = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> hight;
		if (hight > h)
			width += 2;
		else
			width += 1;
	}

	cout << width;
	return 0;
}
