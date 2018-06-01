#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int count=0;
	count=n/2;
	count*=m;
	if(n%2!=0)
		count+=m/2;
	cout<<count;
}