#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

int main()
{
	int num; cin >> num;
	vector<int> member1;
	vector<int> member2;
	vector<int> member3;

	for (int i = 0; i < num; i++) {
		int n; cin >> n;
		if (n == 1)
			member1.push_back(i + 1);
		else if (n == 2)
			member2.push_back(i + 1);
		else
			member3.push_back(i + 1);
	}

	int teams = min(member1.size(), min(member2.size(), member3.size()));

	cout << teams << endl;
	for (int i = 0; i < teams; i++) {
		cout << member1.at(i) << " "
			<< member2.at(i) << " "
			<< member3.at(i) << endl;
	}

	return 0;
}
