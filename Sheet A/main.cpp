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
	int num1, num2; cin >> num1 >> num2;
	int num3 = 6 - max(num1, num2) + 1;
	int den = 6;
	
	int g = gcd(num3, den);
	num3 /= g; den /= g;
	cout << num3 << "/" << den << endl;
	return 0;
}


