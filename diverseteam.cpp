#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a;
    map<int,vector<int>>b;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        if(b[c].size()==0)
            a.push_back(i+1);
        b[c].push_back(i+1);
    }
    if(a.size()<k)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
            cout<<a[i]<<' ';
    }
    
}
