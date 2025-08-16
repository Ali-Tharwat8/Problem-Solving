#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <numeric>

using namespace std;
void algo(vector<int> &vec, int size, int line, int bird);

int main()
{
	int numWires; cin >> numWires;
	vector<int> vec;
	for (int i = 0; i < numWires; ++i) {
		int numBirds; cin >> numBirds;
		vec.push_back(numBirds);
	}

	int numShoots; cin >> numShoots;

	int line, bird;
	for (int i = 0; i < numShoots; ++i) {
		cin >> line >> bird;
		algo(vec, numWires, line, bird);
	}
	
	for (int num : vec) {
		cout << num << endl;
	}
	
	return 0;
}

void algo(vector<int> &vec, int size, int line, int bird) {
	int index = line - 1;
	if (index - 1 >= 0)
		vec[index - 1] += bird - 1;

	if(index + 1 < size)
		vec[index + 1] += vec[index] - bird;

	vec[index] = 0;
	return;
}


