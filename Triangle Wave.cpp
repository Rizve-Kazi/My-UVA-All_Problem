#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<string>str;
        
        for(int i=1;i<=n;i++)
        {
            string s;
            
            for(int j=1;j<=i;j++)
            {
                s += to_string(i);
            }
            str.push_back(s);
            s.clear();
        }
        
        for(int i=n-1;i>=1;i--)
        {
            string s;
            
            for(int j=1;j<=i;j++)
            {
                s += to_string(i);
            }
            str.push_back(s);
            s.clear();
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<str.size();j++)
            {
                cout<<str[j]<<endl;
            }
            if(i != m-1) cout<<endl;
        }
        
        if(t) cout<<endl;
    }
}
