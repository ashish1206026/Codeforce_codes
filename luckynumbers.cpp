#include<iostream>
using namespace std;
int main()
{
	long a;
	cin>>a;
	int b=a;
	int count=0;
	for(int i=0;;i++)
	{
		if(a==0)
			break;
		count++;
		a/=10;
	}
	if(count%2==1)
		count++;
	count/=2;
	long mult=0;
	for(int i=0;i<count;i++)
		mult=mult*100+47;
	if(mult<b)
	    mult=mult*100+47;
	cout<<mult;
}