#include<iostream>
using namespace std;

struct student
{
    /* data */
    int roll_no;
    string name;
    int age;
    int marks;
};


int main()
{
    struct student p1={51,"Shiva",23,100};
    cout<<"Roll_no - "<<p1.roll_no<<endl;
    cout<<"Name - "<<p1.name<<endl;
    cout<<"Age - "<<p1.age<<endl;
    cout<<"Marks - "<<p1.marks<<endl;

    struct student p2={23,"Abhinav",20,200};
    cout<<"Roll_no - "<<p2.roll_no<<endl;
    cout<<"Name - "<<p2.name<<endl;
    cout<<"Age - "<<p2.age<<endl;
    cout<<"Marks - "<<p2.marks<<endl;
    
    
    return 0;
}