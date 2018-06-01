#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int flag=0;
    int count=0;
    if(s[0]=='R')
        flag=1;
    else if(s[0]=='G')
        flag=2;
    else if(s[0]=='B')
        flag=3;
    for(int i=1;i<n;i++)
    {
        if(s[i]=='R')
        {
            if(flag==1)
                count++;
            flag=1;
        }
        else if(s[i]=='G')
        {
            if(flag==2)
                count++;
            flag=2;
        }
        else if(s[i]=='B')
        {
            if(flag==3)
                count++;
            flag=3;
        }
    }
    cout<<count;
}