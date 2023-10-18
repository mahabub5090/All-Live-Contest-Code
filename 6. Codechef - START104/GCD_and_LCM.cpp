#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
/// not solved....!
void solve()
{
    ll int a, b, k, curr;
    cin >> a >> b >> k;
    if (k == 0)
    {
        cout << a + b << endl;
        return;
    }
    else
    {
        k = 10;
        int ans = 0, mn = INT_MAX;
        while (k--)
        {
            int gcd = __gcd(a, b);
            int lcd = (a * b) / gcd;
            if (a > b)
            {
                a = gcd;
            }
            else if (b > a)
            {
                b = gcd;
            }
            ans = a + b;
            mn = min(mn, ans);
        }
        cout
            << mn << endl;
        return;
    }
}
int main()
{
    ll int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
        // cout << __gcd(1, 5) << endl;
    }
    return 0;
}
