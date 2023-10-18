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
    cin >> n;
    int arr[n];
    vector<int> vc;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    pair<int, int> ans;

    for (auto i : st)
    {
        vc.push_back(i);
    }

    for (int i = 0; i < vc.size() - 1; i++)
    {
        for (int j = i; j < vc.size(); j++)
        {
            if ((vc[i] % 2 == 0 && vc[j] % 2 == 0) || (vc[i] % 3 == 0 || vc[j] % 3 == 0))
            {
                ans.first = max(vc[i], vc[j]);
                ans.second = min(vc[i], vc[j]);
            }
        }
    }
    cout << ans.first << " " << ans.second << endl;
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