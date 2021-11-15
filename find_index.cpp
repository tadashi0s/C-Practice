#include <bits/stdc++.h>
using namespace std;

int find_index(int size, int *arr, int ele)
{
    if (size == 0)
    {
        return -1;
    }
    else
    {
        if (arr[0] == ele)
        {
            return 0;
        }
        if (arr[1] == ele)
        {
            return 1;
        }
        else
        {
            int ans = find_index(size - 1, arr + 1, ele);
            if (ans > 0)
                return ans + 1;
        }
    }
}
int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << find_index(n, arr, x);

    return 0;
}
