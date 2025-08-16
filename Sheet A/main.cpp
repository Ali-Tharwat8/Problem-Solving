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
	int num, maxSize, containerSize; cin >> num >> maxSize >> containerSize;
	
	int filling = 0;
	int waste = 0;
	for (int i = 0; i < num; i++) {
		int size; cin >> size;
		if (size <= maxSize) {
			filling += size;
		}
		if (filling > containerSize) {
			waste++;
			filling = 0;
		}
	}

	cout << waste << endl;
	
	return 0;
}




