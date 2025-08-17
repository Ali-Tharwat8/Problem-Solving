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
		int n; long long total;
		cin >> n >> total;

		int depressed = 0;
		for (int i = 0; i < n; i++) {
			char c; int amount;
			cin >> c >> amount;

			if (c == '+')
				total += amount;
			else if (total >= amount)
				total -= amount;
			else
				depressed++;
		}

		cout << total << " " << depressed << endl;
		return 0;
	}




