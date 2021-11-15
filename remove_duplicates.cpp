#include <bits/stdc++.h>
using namespace std;

duplicates(char s[])
{
    if (s[0] == '\0')
    {
        return 0;
    }
    if (s[0] != s[1])
    {
        duplicates(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        duplicates(s);
    }
}
int main()
{
    char str[100];
    cin >> str;
    duplicates(str);
    cout << str << endl;
    return 0;
}