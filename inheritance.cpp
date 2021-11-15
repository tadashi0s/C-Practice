#include <bits/stdc++.h>
using namespace std;

class Employee
{

public:
    int id;
    float salary;
    Employee(int impid)
    {
        id = impid;
        salary = 34;
    }
    // void show()
    // {
    //     cout << "Salary is " << salary << endl;
    // }
    Employee(){}
};
class programmer : public Employee
{
public:
    int languageid;
    programmer(){}
    programmer(int impid)
    {
        id = impid;
        languageid=7;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee E1(5);
    cout<<E1.salary<<endl;
    programmer p1(1);
    cout<<p1.languageid<<endl;
    cout<<p1.id<<endl;
    p1.getData();
    return 0;
}
