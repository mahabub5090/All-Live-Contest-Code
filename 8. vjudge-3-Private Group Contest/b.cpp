#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
// not accepted
void solve()
{
    ll n, ans = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n - 2; i++)
    {
        if (arr[i] + 1 == arr[i + 1] || arr[i] + 1 == arr[i + 2])
            ans++;
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