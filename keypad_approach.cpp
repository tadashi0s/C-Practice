#include <bits/stdc++.h>
using namespace std;
const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
                            "pqrs", "tuv", "wxyz"};
void combination(int input[], char output[], int index, int size)
{
    if (index == size)
    {
        cout << output << " ";
        return;
    }
    int digit = input[index];
    if (digit == 0 || digit == 1)
    {
        cout << output << " ";
        return;
    }
    else
    {
        for (int i = 0; i < strlen(keypad[digit]); i++)
        {
            output[index] = keypad[digit][i];
            combination(input, output, index + 1, size);
        }
    }
}
int main()
{
    int size;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    char output[size + 1];
    output[size] = '\0';
    combination(input, output, 0, size);

    return 0;
}
