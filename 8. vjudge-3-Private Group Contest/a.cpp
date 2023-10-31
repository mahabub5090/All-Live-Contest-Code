#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{

    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    
    for (int i = 0; i < n - 1; i += 2)
    {
        if (s[i] == 'a' && s[i + 1] == 'a')
        {
            ans++;
            s[i + 1] = 'b';
        }
        if (s[i] == 'b' && s[i + 1] == 'b')
        {
            ans++;
            s[i + 1] = 'a';
        }
    }

    // map<char, int> mp;
    // for (char c : s)
    // {
    //     mp[c]++;
    // }
    // int ans = abs(mp['a'] - mp['b']);
    // string str;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     str += "ab";
    // }
    cout << ans << endl
         << s << endl;
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
