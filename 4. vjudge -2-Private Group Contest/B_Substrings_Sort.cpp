#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    int mx = 0, pos = 0;
    vector<string> vc;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sc = s.size();
        if (sc > mx)
        {
            mx = sc;
            pos = i;
        }
        vc.push_back(s);
    }
    string big = vc[pos];
    vector<pair<string, int>> ans;
    bool fg = false;

    for (int i = 0; i < n; i++)
    {
        string cmp = vc[i];
        if (big.find(cmp) != string::npos)
        {
            ans.push_back({cmp, cmp.size()});
        }
        else
        {

            fg = true;
            continue;
        }
    }
    sort(ans.begin(), ans.end(), cmp);

    if (fg)
    {
        cout << "NO\n";
    }
    else
    {

        cout << "YES\n";
        for (auto s : ans)
        {
            cout << s.first << endl;
        }
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