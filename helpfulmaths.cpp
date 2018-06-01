#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int c1=0,c2=0,c3=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
			c1++;
		else if(s[i]=='2')
			c2++;
		else if(s[i]=='3')
			c3++;
	}
	string a;
	for(int i=0;i<c1;i++)
	{
		a+='1';
		a+='+';
	}
	for(int i=0;i<c2;i++)
	{
		a+='2';
		a+='+';
	}
	for(int i=0;i<c3;i++)
	{
		a+='3';
		a+='+';
	}
	string b;
	for(int i=0;i<a.size()-1;i++)
	    b+=a[i];
	cout<<b;
}