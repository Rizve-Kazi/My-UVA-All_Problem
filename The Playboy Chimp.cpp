#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int m;
    cin>>m;
    vector<int>v1(m);

    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }

    for(int i=0; i<m; i++)
    {
        int low=0,high=n-1,mid;
        int mx=-1, mn=-1;

        while(low<=high)
        {
            mid=(low+high)/2;

            if(v[mid]<v1[i])
            {
                mx=v[mid];
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        low=0, high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;

            if(v[mid]>v1[i])
            {
                mn=v[mid];
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        if(mx==-1)
        {
            cout<<"X ";
        }
        else
        {
            cout<<mx<<" ";
        }

        if(mn==-1)
        {
            cout<<"X"<<endl;
        }
        else
        {
            cout<<mn<<endl;
        }
    }
}
