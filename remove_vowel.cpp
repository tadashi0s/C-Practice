#include <bits/stdc++.h>
using namespace std;

string remove_vowel(string str)
{
    regex r("[aeiouAEIOU]");
    return regex_replace(str, r, "");
}
int main()
{
    string str;
    getline(cin, str);
    cout << remove_vowel(str);
    return 0;
}