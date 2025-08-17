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
	int numCakes, cycleTime, capacity, buildTime; cin >> numCakes >> cycleTime >> capacity >> buildTime;

	int numCycles = ceil((float(numCakes) / capacity));

	if ((numCycles - 1) * cycleTime > buildTime) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}




