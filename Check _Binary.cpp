#include<bits/stdc++.h>
using namespace std;

class binary{
    string s;
    public:
          void read(void);
          void check_binary(void);
}
void binary :: read(void){
    cout<<"Enter a Num "<<endl;
    cin>>s;
}
void binary :: check_binary(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1')
        cout<<"It's string"<<endl;
        else
        cout<<"Not a String"<<endl;
    }
}
int main()
{
    binary b;
    b.read;
    b.check_binary;
    return 0;
}