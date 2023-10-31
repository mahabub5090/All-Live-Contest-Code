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
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 2; i <= n; i += 7)
    {
        sum++;
    }

    cout << sum << Endl;
}
int main()
{
    int t;
    t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}