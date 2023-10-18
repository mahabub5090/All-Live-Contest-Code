#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    unsigned long long s, nb, rem, varr;
    string str, sub, rest, ad, ans;
    cin >> s >> str;

    if (s <= 20)
    {

        nb = stoi(str);
        if (nb <= 8)
            cout << 8 << endl;
        else
        {
            rem = nb % 8;
            cout << nb - rem << endl;
        }
    }
    else
    {
        rest = str.substr(0, s - 3);
        sub = str.substr(s - 3, s);
        // cout << rest << Endl << sub << endl;
        nb = stoi(sub);
        rem = nb % 8;
        varr = nb - rem;
        ad = to_string(varr);
        ans = rest + ad;
        cout << ans << endl;
    }
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