#include<bits/stdc++.h>
using namespace std;

class Bankdeposite
{
private:
    /* data */
    int principal;
    int year;
    float interestrate;
    float returnvalue;
public:
    Bankdeposite();
    Bankdeposite(int p,int y,float r);
    Bankdeposite(int p,int y,int r);

};

Bankdeposite::Bankdeposite(int p,int y,int r)
{
    principal=p;
    year=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+r);
    }
}

Bankdeposite::Bankdeposite(int p,int y,int r)
{
     principal=p;
    year=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}


int main()
{
    
    return 0;
}
