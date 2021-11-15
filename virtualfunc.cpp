#include <bits/stdc++.h>
using namespace std;

class base
{
protected:
    string name;
    int age;

public:
    base(string s, int a)
    {
        name = s;
        age = a;
    }
    virtual void display()
    {
    }
};
class derived1 : public base
{
    float salary;

public:
    derived1(string s, int a, float sl) : base(s, a)
    {
        salary = sl;
    }
    void display()
    {
        cout << "Salary of " << name << " is " << salary << endl;
    }
};
class derived2 : public base
{
    long number;

public:
    derived2(string s, int a, long n) : base(s, a)
    {
        number = n;
    }
    void display()
    {
        cout << "Age is " << age << " And Phone No is " << number << endl;
    }
};
int main()
{
    string name = "Shiva";
    int age = 23;
    float salary = 35000;
    derived1 s(name, age, salary);
    long number = 123456789;
    derived2 s1(name, age, number);
    base *student[2];
    student[0] = &s;
    student[1] = &s1;
    student[0]->display();
    student[1]->display();

    return 0;
}
