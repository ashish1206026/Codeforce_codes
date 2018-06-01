#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>chem;
    vector<int>cha,chb;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        cha.push_back(a);
        chem[a]=b;
    }
    int m;
    cin>>m;
    map<int,int>top;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        chb.push_back(a);
        top[a]=b;
    }
    long cost=0;
    for(int i=0;i<n;i++)
        if(chem[cha[i]]>=top[cha[i]])
            cost+=chem[cha[i]];
    for(int i=0;i<m;i++)
        if(top[chb[i]]>chem[chb[i]])
            cost+=top[chb[i]];
    cout<<cost<<endl;
    
}
