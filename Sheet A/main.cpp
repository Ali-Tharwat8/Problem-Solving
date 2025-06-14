#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	
	string word; cin >> word;
	int small = 0, capital = 0;

	for (char c : word)
	{
		if (islower(c))
			small++;
		else
			capital++;
	}

	if (small >= capital)
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	else
		transform(word.begin(), word.end(), word.begin(), ::toupper);

	cout << word;


	return 0;
}
