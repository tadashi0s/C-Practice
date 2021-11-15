#include <bits/stdc++.h>
using namespace std;

class complexNo;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumofrealno(complexNo, complexNo);
    int sumofcomplexno(complexNo, complexNo);
};
class complexNo
{
private:
    int a, b;
    friend int calculator ::sumofrealno(complexNo o1, complexNo o2);
    friend int calculator ::sumofcomplexno(complexNo o1, complexNo o2);

public:
    void setNo(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};

int calculator ::sumofrealno(complexNo o1, complexNo o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumofcomplexno(complexNo o1, complexNo o2)
{
    return (o1.b + o2.b);
}
main()
{
    complexNo c1, c2;
    c1.setNo(1, 2);
    c2.setNo(3, 4);
    calculator solve;
    int ans = solve.sumofrealno(c1, c2);
    cout << "Sum of Real No is " << ans << endl;
    int ans1 = solve.sumofcomplexno(c1, c2);
    cout << "Sum of Complex No is " << ans1 << endl;

    return 0;
}
