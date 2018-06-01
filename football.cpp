#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c0=0;
	int c1=0;
	int d=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			c0++;
			c1=0;
		}
		else if(s[i]=='1')
		{
			c1++;
			c0=0;
		}
		if(c0>=7||c1>=7)
			d=1;
	}
	if(d==1)
		cout<<"YES";
	else 
		cout<<"NO";
}