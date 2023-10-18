#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, y;
    cin >> x >> y;
    // cout << y << y;
    int cnt = 0;
    bool flag = false;
    int loop = 7;
    while (loop--)
    {
        if (x.find(y) == string::npos)
        {
            cnt++;
            x += x;
        }
        else
        {
            flag = true;
            break;
        }
    }
    // cout<<x<<Endl;
    flag ? cout << cnt << endl : cout << -1 << Endl;
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}