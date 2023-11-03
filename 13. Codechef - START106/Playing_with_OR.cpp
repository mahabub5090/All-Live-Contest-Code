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
// not accepted
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> vc;

    int s = 0, e = 0;

    int bt = arr[0];

    while (e < n)
    {
        if (e < k)
        {
            bt = bt | arr[e];
            e++;
        }
        else
        {
            vc.push_back(bt);
            e++;
            s++;
            bt = bt | arr[e];
            bt = bt ^ arr[s];
        }
    }
    vc.push_back(bt);

    // cout << vc.size() << endl;
    // return;

    int ans = 0;
    for (int val : vc)
    {
        if (val % 2 != 0)
            ans++;
    }

    cout << ans << endl;
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