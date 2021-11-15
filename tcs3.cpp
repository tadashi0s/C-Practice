#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	return count==2;
}
bool isPrime(int n){

    for(int i=2;i*i<=n;i++){
        if(n%i==0)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
        return false;
    }
    return n > 1;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int count=0;
    for(int i=n;i<m;i++){
        if(prime(i)){
            if(prime(i+6))
            count++;
        }
    } 
   cout<<count;
}
