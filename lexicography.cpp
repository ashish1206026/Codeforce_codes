#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int flag=0;
    for(int i=0;i<a.size();i++)
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]-'A'+'a';
    for(int i=0;i<b.size();i++)
        if(b[i]>='A' && b[i]<='Z')
            b[i]=b[i]-'A'+'a';
    for(int i=0;i<a.size();i++)
        if(a[i]<b[i])
        {
            flag=-1;
            break;
        }
        else if(a[i]>b[i])
        {
            flag=1;
            break;
        }
    cout<<flag;
}