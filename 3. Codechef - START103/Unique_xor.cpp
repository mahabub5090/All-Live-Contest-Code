#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> idx1, idx2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            idx1.push_back(i);
        else
            idx2.push_back(i);
    }
    if (idx1.size() == 0 || idx2.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    int one = 0, done = 0, two = 0, done2 = 0;
    for (int i = 0; i < idx1.size(); i++)
    {
        if (idx1[i] % k == 0)
        {
            done++;
        }
        else
            one++;
    }
    for (int i = 0; i < idx2.size(); i++)
    {
        if (idx2[i] % k == 0)
            done2++;
        else
            two++;
    }
    int ad = 0, bd = 0;
    if (one <= 1)
    {
        ad = one + (done / 2) + 1;
    }
    else if (one % 2 != 0)
    {
        ad = one + (done / 2) + 1;
    }
    else
    {
        ad = one + (done / 2);
    }
    if (two <= 1)
    {
        bd = two + (done2 / 2) + 1;
    }
    else if (two % 2 != 0)
    {
        bd = two + (done2 / 2) + 1;
    }
    else
    {
        bd = two + (done2 / 2);
    }
    cout << min(ad, bd) << endl;
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