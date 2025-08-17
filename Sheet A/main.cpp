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
	string latters = "abcdefghijklmnopqrstuvwxyz";
	int length, num; cin >> length >> num;
	string password;

	for (int i = 0; i < length; i++) {
		password += latters.at(i % num);
	}
	
	cout << password << endl;
	return 0;
}
