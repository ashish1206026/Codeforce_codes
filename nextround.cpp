#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]!=0)
			count++;
	}
	if(count<=k)
	    cout<<count;
	else
	{
	    int ref=a[k-1];
	 	int c=0;
	 	for(int i=k;;i++)
	 	{
	 		if(a[i]!=ref)
	 			break;
	 		c++;
	 	}   
	 	cout<<c+k;
	}
}