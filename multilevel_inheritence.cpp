#include <bits/stdc++.h>
using namespace std;

class student //Class 1
{
protected:
    int roll_num;
    string name;

public:
    void setdata(int num, string str)
    {
        roll_num = num;
        name = str;
    }
    void getdata(void);
};
void student ::getdata()
{
    cout << "Roll_No of " << name << " is " << roll_num << endl;
}
class marks : public student //Class 2
{
protected:
    int maths;
    int english;

public:
    void getmarks(int m1, int e1);
    void displaymarks();
};
void marks ::getmarks(int m1, int e1)
{
    maths = m1;
    english = e1;
}
void marks ::displaymarks(void)
{
    cout << "Marks in Maths " << maths << " , Marks in English " << english << endl;
}
class result : public marks //Class 3
{
    int total_marks;

public:
    void display(void);
};
void result ::display()
{
    getdata();
    displaymarks();
    cout << "Total Marks are " << maths + english << endl;
}
int main()
{
    result s1;
    s1.setdata(51, "Shiva");
    s1.getmarks(35, 78);
    s1.display();
    cout << endl;
    result s2;
    s2.setdata(62, "Utkarsh");
    s2.getmarks(56, 38);
    s2.display();
    return 0;
}
