#include <bits/stdc++.h>
using namespace std;
class base
{
    int a;

public:
    int b;
};
class derived : private base
{
    char c;
};
int main()
{
    base obj;
    obj.b = 10;
    cout << obj.b;
    return 0;
}