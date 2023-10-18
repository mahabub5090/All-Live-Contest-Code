#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    ll int n, d, t1, t2, cpy;
    cin >> n >> d >> t1 >> t2;
    // t1++;
    // t2++;
    vector<ll int> vc;
    if (d == 1 )
    {
        cout << n - ((max(t1, t2) - min(t1, t2)) + 1) << endl;
        return;
    }
    for (ll int i = d; i < t1; i ++)
    {
        if (i % d == 0)
        {
            // cout << i << " ";
            vc.push_back(i);
        }
    }
    for (ll int i = t2 + 1; i <= n; i ++)
    {
        if (i % d == 0)
        {
            // cout << i << " ";
            vc.push_back(i);
        }
    }
    cout << vc.size() << Endl;
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}