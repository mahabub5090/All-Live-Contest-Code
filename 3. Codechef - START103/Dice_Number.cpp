#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    vector<int> als, bob;
    als.push_back(a);
    als.push_back(b);
    als.push_back(c);
    bob.push_back(x);
    bob.push_back(y);
    bob.push_back(z);
    sort(als.begin(), als.end());
    reverse(als.begin(), als.end());
    sort(bob.begin(), bob.end());
    reverse(bob.begin(), bob.end());

    int al = (als[0] * 100) + (als[1] * 10) + als[2];
    int bl = (bob[0] * 100) + (bob[1] * 10) + bob[2];

    if (al == bl)
        cout << "Tie\n";
    else if (al > bl)
        cout << "Alice\n";
    else
        cout << "Bob\n";
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