#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
    static int count;
    public:
     void Id(void)
     {
         cout<<"Enter the ID "<<endl;
         cin>>id;
         count++;
     }
     void show_id(void)
     {
         cout<<"ID of Student is "<<id<<" and Roll-No is "<<count<<endl;
     }
};

int student ::count=1884110000;

int main()
{
    student A,B,C,D,E,F;
    A.Id();
    A.show_id();

    D.Id();
    D.show_id();

    return 0;
}
