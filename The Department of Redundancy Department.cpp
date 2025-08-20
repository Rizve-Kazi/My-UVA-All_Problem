#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    map<int,int>freq;
    vector<int>v;

    while(cin>>x)
    {
        if(freq[x]==0)
        {
            v.push_back(x);
        }
        freq[x]++;
    }

    for(int it:v)
    {
        cout<<it<<" "<<freq[it]<<endl;
    }
    return 0;
}
