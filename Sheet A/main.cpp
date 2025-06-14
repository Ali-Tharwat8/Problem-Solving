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
	vector<int> nums;

	for(int i = 0; i < n; i++)
	{
		int num; cin >> num;
		nums.push_back(num);
	}



	int first = 0, second = 0;
	int front = 0, back = n - 1;
	bool toggle = true;

	for (int i = 0; i < n; i++)
	{
		int pick;
		if (nums.at(front) >= nums.at(back))
		{
			pick = nums.at(front);
			front++;
		}
		else
		{
			pick = nums.at(back);
			back--;
		}

		if (toggle)
			first += pick;
		else
			second += pick;

		toggle = !toggle;
	}
	cout << first << " " << second;

	return 0;
}
