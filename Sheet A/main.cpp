#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int matrix[5][5] = {0};
	
	int num;
	int row = 0, column = 0;
	bool found = false;

	while (row < 5 && !found)
	{
		column = 0;
		while (column < 5 && !found)
		{
			cin >> num;
			if (num != 0)
				found = true;
			column++;
		}
		row++;
	}

	cout << abs(row - 3) + abs(column - 3);



	return 0;
}
