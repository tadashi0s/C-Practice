#include <bits/stdc++.h>
using namespace std;

class class2;
class class1
{
private:
    int num1;
    friend void exchange(class1 &, class2 &);

public:
    void setdata(int a)
    {
        num1 = a;
    }
    void displaydata(void)
    {
        cout << "Value of a is " << num1 << endl;
    }
};
class class2
{
private:
    int num2;
    friend void exchange(class1 &, class2 &);
public:
    void setdata(int a)
    {
        num2 = a;
    }
    void displaydata(void)
    {
        cout << "Value of a is " << num2 << endl;
    }
};
void exchange(class1 &a1, class2 &b1)
{
    int tmp = a1.num1;
                  a1.num1 = b1.num2;
    b1.num2 = tmp;
}
int main()
{
    class1 o1;
    o1.setdata(25);
    o1.displaydata();

    class2 o2;
    o2.setdata(65);
    o2.displaydata();
    exchange(o1, o2);
    cout << "After exchange value of a is " << endl;
    o1.displaydata();
    cout << "After exchange value of b is " << endl;
    o2.displaydata();
    return 0;
}
