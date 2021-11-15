#include <bits/stdc++.h>
using namespace std;
void removeX(char str[])
{
    if (str == '\0')
    {
        return ;
    }
    if (str[0] !='x')
    {
        removeX(str + 1);
    }
    else{
            int i = 1;
            for (; str[i] != '\0'; i++)
            {
                str[i - 1] = str[i];
            }
            str[i - 1] = '\0';
            removeX(str);
    }
    return;
}
int length(char str[])
{
    int ans;
    if (str[0] == '\0')
    {
        return 0;
    }
    ans = length(str + 1);
    return 1 + ans;
}
int main()
{
    char str[100];
    cin >> str;
    int l = length(str);
    cout << l << endl;
    removeX(str);
    cout << str << endl;
    cout << l << endl;
    return 0;
}