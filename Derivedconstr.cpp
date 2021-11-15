#include <bits/stdc++.h>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        cout << "Constructor-1 is called " << endl;
        data1 = a;
    }
    void printdata1()
    {
        cout << "Value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        cout << "Constructor-2 is called " << endl;
        data2 = b;
    }
    void printdata2()
    {
        cout << "Value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{ //first base1 constr get execuited than base2 constr
    int data3;
    int data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
    }
    void printdata()
    {
        printdata1();
        printdata2();
        cout << "Value of data3 and data4 are " << data3 << "," << data4 << endl;
    }
};
int main()
{
    derived d(1, 2, 3, 4);
    d.printdata();
    return 0;
}
