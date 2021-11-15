#include<bits/stdc++.h>
using namespace std;
int find_all_indices(int arr[],int size,int output[],int ele)
{
	int ans;
    if(size==0)
    {
        return 0;
    }
    else{
        ans=find_all_indices(arr+1,size-1,output,ele);
        if(arr[0]==ele)
        {
            for(int i=ans-1;i>=0;i--)
            {
                output[i+1]=output[i]+1;
            }
            output[0]=0;
            ans++;
        }
        else
        {
          for(int i=ans-1;i>=0;i--)
            {
                output[i]=output[i]+1;
            }  
        }
     }
     return ans;
}
void print(int *arr,int n,int x)
{
    int *output=new int[n];
    int size=find_all_indices(arr,n,output,x);
    for(int i=0;i<size;i++)
    {
        cout<<output[i]<<" ";
    }
}
int main()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *output=new int;
    print(arr,n,x);
    return 0;
}
