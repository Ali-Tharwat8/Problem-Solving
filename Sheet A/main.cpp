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
		string s; cin >> s;
		int count1 = 0, count2 = 0, count3 = 0;
		for (int i = 0; i < s.length(); i += 2) {
			if (s.at(i) == '1') count1++;
			else if (s.at(i) == '2') count2++;
			else count3++;
		}

		string result;
		for (int i = 0; i < count1; i++) result += "1+";
		for (int i = 0; i < count2; i++) result += "2+";
		for (int i = 0; i < count3; i++) result += "3+";
		
		if (!result.empty()) result.pop_back();
		cout << result << endl;

		return 0;
	}




