#include <bits/stdc++.h>
using namespace std;

class complexNo
{
    //private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    // void getdata(complexNo o1, complexNo o2)
    // {
    //     a = o1.a + o2.a;
    //     b = o1.b + o2.b;
    // }
    void display(void)
    {
        cout << "Complex no is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    int size = 4;
    complexNo *ptr = new complexNo[size];
    // ptr->setdata(5,6);
    // ptr->display();
    complexNo *ptrTemp = ptr;
    int p, q, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter p and q " << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr->display();
        ptr++;
    }
    return 0;
}
