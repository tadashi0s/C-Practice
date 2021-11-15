#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out("../C:/Users/shiva/Desktop/sample.txt");
    string str;
    cout<<"Enter the name"<<endl;
    cin>>str;
    out<<"Name Is " + str;
    out.close();

    ifstream in("sample.txt");
    string str1;
    getline(in,str1);
    // in>>str1;
    cout<<str1;
    return 0;
}