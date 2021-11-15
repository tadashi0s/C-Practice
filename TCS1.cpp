#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int count=0;
    for(int i=n1;i<=n2;i++)
    {
        vector<bool>isRepeted(10,false);
        int j=i;
        int flag=0;
      while(j){
          int x = j%10;
          if(isRepeted[x]==true){
              flag=1;
              break;
          }
          isRepeted[x]=true;
          j/=10;
      }
      if(flag==0)
      count++;

    }
    cout<<count;
    return 0;
}