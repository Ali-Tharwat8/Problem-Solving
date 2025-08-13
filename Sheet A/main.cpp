#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int num; cin >> num;
	vector<int> color1;
	vector<int> color2;

	for (int i = 0; i < num; i++) {
		int color; cin >> color;
		color1.push_back(color);
		cin >> color;
		color2.push_back(color);
	}

	int sum = 0;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i == j)
				continue;
			if (color2[i] == color1[j])
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
