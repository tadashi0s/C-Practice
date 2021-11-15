#include <bits/stdc++.h>
using namespace std;

void swapstr(string str, int l, int n)
{
    if (l == n)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = l; i < str.size(); i++)
        {
            swap(str[l], str[i]);
            swapstr(str, l + 1, n);
            swap(str[l], str[i]);
        }
    }
}
int main()
{
    string str;
    cin >> str;
    cout<<endl;
    int l = 0;
    int n = str.size();
    swapstr(str, l, n-1);
    return 0;
}
