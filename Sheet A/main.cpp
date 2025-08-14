#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int price, pound; cin >> price >> pound;

	int num = 0;
	for (int i = 1; i <= 10; ++i) {
		int temp = i * price;
		num++;

		if (temp % 10 == 0 || (temp - pound) % 10 == 0) {
			break;
		}
	}
	cout << num << endl;
	return 0;
}
