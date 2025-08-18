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
	long long n; cin >> n;

	while (n != 0) {
		long long squareRoot = sqrt(n);
		if (squareRoot * squareRoot == n) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
		cin >> n;
	}
}
