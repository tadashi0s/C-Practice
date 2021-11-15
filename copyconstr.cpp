#include <bits/stdc++.h>
using namespace std;

class number
{
    int a;
    //int b;

public:
    number();
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "Number is " << a << endl;
    }
};

int main()
{
   number x(35),y(45);
   x.display();
   number z1(y);
   z1.display();
   number z3=y;
   z3.display();
   return 0;
}
