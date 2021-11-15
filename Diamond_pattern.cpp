#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int space=n-1;
  int i,j,k;
  for(i=0;i<n;i++)
  {
      for(j=0;j<space;j++)
      {
          cout<<" ";
      }
      for(j=0;j<=i;j++)
      {
          cout<<"* ";
      }
      cout<<endl;
      space--;
  }
  space=0;
  for(i=n;i>0;i--)
  {
      for(j=0;j<=space;j++)
      {
          cout<<" ";
      }
      for(j=1;j<i;j++)
      {
          cout<<"* ";
      }
      cout<<endl;
      space++; 
  }
    return 0;
}