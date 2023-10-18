#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1 = 0, s2 = 0;
        string s;
        cin>>s;
        for (int i = 0; i < 3; i++)
        {
            s1 += (s[i] - '0');
        }

        for (int i = 3; i < 6; i++)
        {
            s2 += (s[i] - '0');
        }

        (s1 == s2) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

