#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, i;
    cn(n);
    int arr[n];
    foi(i, 0, n) cin >> arr[i];

    vector<int> vc;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
            if (i == n - 1)
            {
                vc.push_back(zero);
            }
        }
        else
        {
            if (zero > 0)
            {
                vc.push_back(zero);
                zero = 0;
            }
        }
    }
    if (vc.size() <= 1)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < vc.size(); i++)
    {
        int v = vc[i];
        // cout << v << " ";
        if (v > 1)
            continue;
        cnt++;
    }
    if (cnt % 2 == 0)
    {
        cout << cnt / 2 << endl;
    }
    else
    {
        cout << (cnt / 2) + 1 << endl;
    }
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