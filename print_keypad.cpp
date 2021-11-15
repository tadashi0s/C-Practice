#include <bits/stdc++.h>
using namespace std;

const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
                            "pqrs", "tuv", "wxyz"};
void print_keypad(int input, string output)
{
    int first=input/10;
    int last = input % 10;
    for (int i = 0; i < strlen(keypad[last]); i++)
    {
        print_keypad(first, keypad[last][i] + output);
    }
    if (input == 0 || input == 1)
        {
            cout << output << " ";
            return;
        }
}
int main()
{
    int input;
    cin >> input;
    string output = " ";
    print_keypad(input, output);
    return 0;
}