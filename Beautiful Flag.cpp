#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        double r;
        cin >> r;

        double a = r / 0.2;        
        double b = (60.0 / 100.0) * a;  

        double m = (45.0 * a) / 100.0;
        double n = (55.0 * a) / 100.0;
        double p = b / 2.0;

        cout << "Case " << i << ":" << endl;
        cout << fixed << setprecision(0);
        cout << -m << " " << p << endl;
        cout << n << " " << p << endl;
        cout << n << " " << -p << endl;
        cout << -m << " " << -p << endl;
    }

    return 0;
}
