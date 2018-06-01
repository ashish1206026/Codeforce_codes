#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,a;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
			continue;
		else if(s[i]>='A'&&s[i]<='Z')
		{
		    a+='.';
		    a+=s[i]-'A'+'a';
		}
		else
		{
		    a+='.';
		    a+=s[i];
		}
	}
	cout<<a;
}