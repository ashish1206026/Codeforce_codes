#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0;
    if(s.size()==1)
        cout<<1;
    else
    {
       for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-i-1])
        {
            flag=1;
            cout<<s.size();
            break;
        }
        if(flag==0)
        {
            int count=0;
            char c=s[0];
            for(int i=0;i<s.size();i++)
                if(s[i]==c)
                    count++;
                else
                    break;
            if(count==s.size())
                cout<<0;
            else
                cout<<s.size()-1;
        }   
    }
}
