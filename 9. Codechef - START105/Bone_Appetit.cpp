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
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    cout << n * x + m * y << endl;
}
int main()
{
    int t;
    t = 1;
    // cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}