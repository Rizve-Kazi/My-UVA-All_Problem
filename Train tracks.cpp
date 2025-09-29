#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); 
    
    string s;
    
    while(n--)
    {
        getline(cin, s);
        int a = 0, b = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'M') a++;
            else if(s[i] == 'F') b++;
        }

        if(a == b && a > 1)
            cout << "LOOP" << endl;
        else
            cout << "NO LOOP" << endl;
    }
}
