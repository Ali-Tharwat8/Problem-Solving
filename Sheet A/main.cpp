#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	string name; cin >> name;
	char prev = 'a';
	int sum = 0;
	for (char c : name) {
		int diff = abs(c - prev);
		if (diff <= 13)
			sum += diff;
		else
			sum += (26 - diff);
		prev = c;
	}
	cout << sum << endl;
	return 0;
}
