#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
//accepted
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    int curr = 1;
    int cmp = s[0] - '0';
    if (cmp == 0)
        cmp = 10;
    while (curr <= 10)
    {
        if (cmp == curr)
        {
            ans++;
            break;
        }
        else if (cmp < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    cmp = s[1] - '0';
    if (cmp == 0)
        cmp = 10;
    while (curr <= 10)
    {
        if (cmp == curr)
        {
            ans++;
            break;
        }
        else if (cmp < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    cmp = s[2] - '0';
    if (cmp == 0)
        cmp = 10;
    while (curr <= 10)
    {
        if (cmp == curr)
        {
            ans++;
            break;
        }
        else if (cmp < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    cmp = s[3] - '0';
    if (cmp == 0)
        cmp = 10;
    while (curr <= 10)
    {
        if (cmp == curr)
        {
            ans++;
            break;
        }
        else if (cmp < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }

    cout << ans << endl;
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