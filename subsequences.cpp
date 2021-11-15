#include<bits/stdc++.h>
using namespace std;

int subseq(string input,string *output)
{
    if(input.empty())
    {
        output[0]=" ";
        return 1;
    }
    string smallstring=input.substr(1);
    int substringsize=subseq(smallstring,output);
    for(int i=0;i<substringsize;i++)
    {
        output[i+substringsize]=input[0]+output[i];
    }
    return 2*substringsize;
}
int main()
{
    string input;
    cin>>input;
    string *output=new string[1000];
    int count=subseq(input,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}