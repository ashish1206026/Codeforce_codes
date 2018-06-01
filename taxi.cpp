#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1=0,c2=0,c3=0,c4=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
            c1++;
        else if(a==2)
            c2++;
        else if(a==3)
            c3++;
        else 
            c4++;
    }
    int count=0;
    count+=c4;
    count+=c3;
    c1-=c3;
    if(c2%2==1)
    {
        count+=c2/2+1;
        c1-=2;
    }
    else 
        count+=c2/2;
    if(c1>0)
        if(c1%4==0)
            count+=(c1/4);
        else
            count+=(c1/4)+1;
    cout<<count;
    
}
