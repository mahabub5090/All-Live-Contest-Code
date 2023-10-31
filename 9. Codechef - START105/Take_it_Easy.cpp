#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

//accepted

void solve()
{

    ll n;
    cin >> n;
    ll arr[n];

    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(arr[i], mn);
        mx = max(mx, arr[i]);
        sum += arr[i];
    }
    ll eq = sum / n;
    ll stock = 0;
    ll ex;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == eq)
            continue;
            
        ex = (arr[i] - eq);
        stock += ex;

        if (ex % 2 != 0)
        {
            cout << "No\n";
            return;
        }
    }

    if (stock == 0)
        cout << "Yes\n";
    else
    {
        cout << "No\n";
    }
}
int main()
{
    ll t;
    t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        // ll c = 15;
        // ll x = sqrt(c);
        // cout << x;

        solve();
    }
    return 0;
}