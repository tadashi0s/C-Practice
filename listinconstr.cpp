#include <bits/stdc++.h>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(i + j)
    {
        cout << "Sum of a & b = " << b << endl;
    }
};
int main()
{
    Test T(2,3);
    return 0;
}
