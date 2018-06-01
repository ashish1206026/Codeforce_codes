#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	for(int i=0;i<t;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		int s=x+y+z;
		if(s>=2)
			count++;
	}
	cout<<count;
}