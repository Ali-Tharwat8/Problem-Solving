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
	int num; cin >> num;
	vector<string> words(num);
	for (int i = 0; i < num; ++i) {
		string word; cin >> word;
		if (word.size() > 10) {
			word = word.front() + to_string(word.size() - 2) + word.back();
		}
		words.at(i) = (word);
	}

	for (int i = 0; i < num; ++i) {
		cout << words.at(i) << endl;
	}

	return 0;
}




