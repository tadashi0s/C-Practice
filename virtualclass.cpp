#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setroll_num(int x)
    {
        roll_no = x;
    }
    void print_roll_no(void)
    {
        cout << "Student Roll_No is " << roll_no << endl;
    }
};
class marks : virtual public student
{
protected:
    int maths;
    int physics;

public:
    void getmarks(int m1, int p1)
    {
        maths = m1;
        physics = p1;
    }
    void display_marks(void)
    {
        cout << "Marks of Maths = " << maths << endl;
        cout << "Marks of Physics = " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void getscore(float sc)
    {
        score = sc;
    }
    void displayscore(void)
    {
        cout << "Sports Score is " << score << endl;
    }
};
class result : public marks, public sports
{
public:
    void Display()
    {
        print_roll_no();
        display_marks();
        displayscore();
    }
};
int main()
{
    result s1;
    s1.setroll_num(51);
    s1.getmarks(97, 82);
    s1.getscore(210);
    s1.Display();
    return 0;
}