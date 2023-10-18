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
    string s, cpy, ans;
    cn(n);
    cn(s);
    int i = 0;
    map<string, int> mp;
    for (int k = 0; k < n - 1; k++)
    {
        cpy = s.substr(i, 2);
        // cout<<cpy<<endl;;
        mp[cpy]++;
        i++;
    }
    int mx = 0;
    for (auto i : mp)
    {
        // cout << i.first << " " << i.second << endl;
        if (i.second > mx)
        {
            ans = i.first;
            mx = i.second;
        }
    }
    cout << ans << endl;
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