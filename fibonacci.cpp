#include<iostream>
using namespace std;

int fibo(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
    
}
int main()
{
    int a;
    cout<<"Enter the num"<<endl;
    cin>>a;
    cout<<"Term Position "<<fibo(a)<<endl;
    return 0;
}