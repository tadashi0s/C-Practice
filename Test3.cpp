#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={3,4,6,7,1,8,0};
    int x = 3;
    int count = 0;
    for (int i = 1; i <7; i++)
    {
        if (a[i] < x)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}