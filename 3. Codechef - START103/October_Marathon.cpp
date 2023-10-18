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
    if (n < 3)
        cout << "GOLD\n";
    else if (n < 6)
        cout << "SILVER\n";
    else
    {
        cout << "BRONZE\n";
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