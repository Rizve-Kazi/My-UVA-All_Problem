#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;

    while(cin>>s1>>s2)
    {
        int a=s1.size(),b=s2.size();
        int m=0;
        int j=0;

        for(int i=0; i<a; i++)
        {
            while(j<b)
            {
                if(s1[i]==s2[j])
                {
                    m++;
                    j++;
                    break;
                }
                j++;
            }
        }

        if(m==a)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
