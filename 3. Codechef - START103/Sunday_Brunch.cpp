#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()c
{
    int p, y;
    cin >> p >> y;
    if (p / y > 20)
        cout << 20 << endl;
    else
        cout << p / y << endl;
}
int main()
{
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}