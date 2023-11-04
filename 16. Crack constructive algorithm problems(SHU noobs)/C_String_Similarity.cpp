/*
**************************************************************
*Bis'Millah Hir Rah'Manir Rahim == start with the name of \n*
*                    ALLAH Subhana Tayala                    *
*                Author: Md. Mahabubar Rahman                *
*               CSE,RPI && Rangpur, Bangladesh               *
**************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
#define Allhamdulillah 0
#define pb(x) push_back(x)
#define pop() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
// Accepted
void solve()
{

    int n;
    cin >> n;
    string s, sub;
    cin >> s;
    if (s == "0")
    {
        cout << s << endl;
        return;
    }
    if (s == "1")
    {
        cout << s << endl;
        return;
    }
    vector<string> vc;
    for (int i = 0; i <= (s.size() - n); i++)
    {
        sub = s.substr(i, n);
        vc.pb(sub);
        // cout << sub << endl;
    }
    // cout << endl;
    vector<char> ans(n);
    for (int i = 0; i < vc.size(); i++)
    {
        ans[i] = vc[i][i];
    }

    for (char c : ans)
    {
        cout << c;
    }

    cout << endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}