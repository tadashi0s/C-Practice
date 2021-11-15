// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find all possible combinations by
// replacing key's digits with characters of the
// corresponding list
void findCombinations(vector<char> keypad[],
					int input[], string res, int index, int n)
{
	// If processed every digit of key, print result
	if (index == n) {
		cout << res << " ";
		return;
	}

	// Stores current digit
	int digit = input[index];

	// Size of the list corresponding to current digit
	int len = keypad[digit].size();

	// One by one replace the digit with each character in the
	// corresponding list and recur for next digit
	for (int i = 0; i < len; i++) {
		findCombinations(keypad, input, res + keypad[digit][i], index + 1, n);
	}
}

// Driver Code
int main()
{
	// Given mobile keypad
	vector<string>arr=
	{
	"","","abc"
	};

	// Given input array
	int input[] = { 2, 3, 4 };

	// Size of the array
	int n = sizeof(input)/sizeof(input[0]);

	// Function call to find all combinations
	findCombinations(keypad, input, string(""), 0, n );

	return 0;
}

