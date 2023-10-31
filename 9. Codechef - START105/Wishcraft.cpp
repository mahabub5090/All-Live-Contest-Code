#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'


//not solved 

void solve()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p >> q;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    while (p--)
    {
        if (vc.size() > 2)
        {
            sort(vc.begin(), vc.end());
            int x, y;
            x = vc.back();
            vc.pop_back();
            y = vc.back();
            vc.pop_back();
            vc.push_back(x + y);
        }
    }
    while (q--)
    {
        if (vc.size() > 2)
        {
            sort(vc.begin(), vc.end());
            int x, y;
            x = vc.back();
            vc.pop_back();
            y = vc.back();
            vc.pop_back();
            vc.push_back(abs(x - y));
        }
    }
    sort(vc.begin(), vc.end());
    cout << vc[vc.size() - 1] - vc[0] << Endl;
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