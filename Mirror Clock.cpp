#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        char ch;
        cin>>n>>ch>>m;
        int k=m/5;

        int temp1,temp2;

        //  part 1 (Hour mirror)....................
        {
            if(m==0)
            {
                if(n==1 || n==11)
                {
                    if(n==1) temp1=11;
                    else temp1=1;
                }
                else if(n==2 || n==10)
                {
                    if(n==2) temp1=10;
                    else temp1=2;
                }
                else if(n==3 || n==9)
                {
                    if(n==3) temp1=9;
                    else temp1=3;
                }
                else if(n==4 || n==8)
                {
                    if(n==4) temp1=8;
                    else temp1=4;
                }
                else if(n==5 || n==7)
                {
                    if(n==5) temp1=7;
                    else temp1=5;
                }
                else if(n==6)
                {
                    temp1=6;
                }
                else if(n==12)
                {
                    temp1=12;
                }
            }
            else
            {
                if(n==12) n=0;
                n=n+1;

                if(n==1 || n==11)
                {
                    if(n==1) temp1=11;
                    else temp1=1;
                }
                else if(n==2 || n==10)
                {
                    if(n==2) temp1=10;
                    else temp1=2;
                }
                else if(n==3 || n==9)
                {
                    if(n==3) temp1=9;
                    else temp1=3;
                }
                else if(n==4 || n==8)
                {
                    if(n==4) temp1=8;
                    else temp1=4;
                }
                else if(n==5 || n==7)
                {
                    if(n==5) temp1=7;
                    else temp1=5;
                }
                else if(n==6)
                {
                    temp1=6;
                }
                else if(n==12)
                {
                    temp1=12;
                }
            }
        }

        //  part 2 (Minute mirror)....................
        {
            if(m==0)
            {
                temp2=0;
            }
            else
            {
                temp2=60-m;
            }
        }

        // ---- output formatting ----
        if(temp1>=0 && temp1<=9)
        {
            cout<<"0"<<temp1<<":";
        }
        else
        {
            cout<<temp1<<":";
        }

        if(temp2>=0 && temp2<=9)
        {
            cout<<"0"<<temp2<<"\n";
        }
        else
        {
            cout<<temp2<<"\n";
        }
    }
}
