#include<bits/stdc++.h>
using namespace std;

template<class t1=int,class t2=float,class t3=char>
class base{
    public:
    t1 a;
    t2 b;
    t3 c;
    base(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main()
{
    base<> b(2,2.5,'v');
    b.display();
    cout<<endl;
    base<float,char,char> c(8.5,'m','s');
    c.display();
    return 0;
}