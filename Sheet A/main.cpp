#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	string position, instructions; cin >> position >> instructions;
	
	int steps = 0;
	for (int i = 0; i < instructions.size(); ++i) {
		if (position.at(steps) == instructions.at(i)) {
			steps++;
		}
	}
	cout << steps + 1 << endl;
	return 0;
}
