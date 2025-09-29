#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s, d;
        cin >> s >> d;

        if (s < d || (s + d) % 2 != 0)
        {
            cout << "impossible" << endl;
            continue;
        }

        int a = (s + d) / 2;
        int b = (s - d) / 2;

        if (a >= b)
            cout << a << " " << b << endl;
        else
            cout << b << " " << a << endl;
    }
}
