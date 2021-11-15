#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id=7;

public:
    int salary=38;
    Employee(){};
    Employee(int impid)
    {
        id = impid;
        salary = 34;
    }
    void show();
};
void Employee ::show()
    {
        cout << "Salary of "
             << " Employee " << id << " is " << salary << endl;
    }
class programmer : public Employee
{
    int languageid;

public:
    programmer(){};
    programmer(int lid)
    {
        languageid = lid;
    }
    void getData();
};
 void programmer ::getData()
    {
        show();
        cout << "Language ID is " << languageid << endl;
    }
int main()
{
    Employee E1(5);
    // E1.show();
    // E1.salary;
    programmer p1(9);
    p1.getData();
    p1.show();
    p1.salary;
    return 0;
}
