#include<iostream>
using namespace std;


void rotateOne(int arr[],int n){
  
  int temp =arr[0];
  for(int i=0;i<n-1;i++){
      arr[i]=arr[i+1];
  }
  arr[n-1]=temp;

}
void leftrotate(int arr[],int n,int d){
  d=d%n;
  for(int i=0;i<d;i++){
      rotateOne(arr,n);
  } 
  for(int i=0;i<n;i++ ){
      cout<<arr[i]<<" ";
  }
}



int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int d;
   cin>>d;
   leftrotate(arr,n,d);

}