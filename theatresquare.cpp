#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m,a;
	cin>>n>>m>>a;
	long count=1;
    if(n%a==0)
		count=n/a;
	else
		count=n/a+1;

    if(m%a==0)
		count*=(m/a);
	else
		count*=((m/a)+1);
	cout<<count;
}