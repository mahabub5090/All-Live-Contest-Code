#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

// accepted

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    // set<ll> st;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        // st.insert(arr[i]);
        mp[arr[i]]++;
    }
    if ( mp.size() == 1)
    {
        yes;
        return;
    }
    vector<ll> vc;
    for (auto val : mp)
    {
        vc.push_back(val.second);
    }

    if (mp.size() == 2)
    {
        if (vc[0] == vc[1] + 1 || vc[0] + 1 == vc[1] || vc[0] == vc[1])
        {
            yes;
            return;
        }
    }
    no;
    return;
}
int main()
{
    int t;
    // t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}