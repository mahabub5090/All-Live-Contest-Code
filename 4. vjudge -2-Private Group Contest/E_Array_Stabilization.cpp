#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x

#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN, mn = INT_MAX, mx2 = INT_MIN;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
        arr[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
            continue;
        mx2 = max(mx2, arr[i]);
        st.insert(arr[i]);
    }
    st.size() == 1 ? cout << 0 << endl : cout << st.size();
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