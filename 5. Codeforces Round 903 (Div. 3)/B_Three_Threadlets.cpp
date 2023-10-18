#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
// unsolved
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vc;
    vc.push_back(a);
    vc.push_back(b);
    vc.push_back(c);
    bool tws = false, ths = false;
    if (a == b && b == c)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        sort(vc.begin(), vc.end());
        int mn = vc[0];

        int lp = 4;
        while (lp--)
        {
            if (mn == vc[1])
                tws = true;
            if (mn == vc[2])
                ths = true;
            mn += mn;
        }
    }
    if (tws && ths)
        cout << "YES\n";
    else
        cout << "NO\n";
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