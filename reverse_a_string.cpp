#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	getline(cin,name);
	for(int i=name.length()-1;i>=0;i--)
	{
		cout<<name[i];
	}
}
