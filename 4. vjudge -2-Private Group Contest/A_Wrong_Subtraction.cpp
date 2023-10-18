#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = n;
    for (int i = 0; i < k; i++)
    {
        if (ans % 10 == 0)
        {
            // if (ans / 10 < 0)
            // {
            //     cout << ans << endl;
            //     return;
            // }
            ans /= 10;
        }
        else
        {
            // if (ans - 1 < 0)
            // {
            //     cout << ans << endl;
            //     return;
            // }
            ans--;
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