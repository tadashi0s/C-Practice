#include <bits/stdc++.h>
using namespace std;

class Employee
{
protected:
    int id;
    int salary;

public:
    Employee(){};
    getdata(int impid,int slry)
    {
        id = impid;
        salary=slry;
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
    programmer p1(9);
    p1.getdata(3,45000);
    p1.getData();
    return 0;
}
