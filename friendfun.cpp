#include <bits/stdc++.h>
using namespace std;

class complexNo
{
private:
    int a;
    int b;

public:
    friend complexNo sumcomplex(complexNo o1, complexNo o2);
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printno()
    {
        cout << "Your Complex No is " << a << "+" << b << "i" << endl;
    }
}; 
complexNo sumcomplex(complexNo o1, complexNo o2)
{
    complexNo o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complexNo c1, c2, sum;
    c1.setdata(1, 2);
    c1.printno();

    c2.setdata(3, 4);
    c2.printno();

    sum=sumcomplex(c1, c2);
    sum.printno();

    return 0;
}
