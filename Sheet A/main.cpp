#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;
	vector <int> nums;
	int num;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums.push_back(num);
	}

    sort(nums.begin(), nums.end());
	
	for (int i = 0; i < n; i++)
	{
		cout << nums.at(i) << " ";
	}
	return 0;
}
