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
//Accepted
void solve()
{

    int n;
    cin >> n;

    vector<int> vc;
    for (int i = 1; i <= 9; i++)
    {
        if (n % i == 0)
            vc.pb(i);
    }
    sort(vc.begin(), vc.end());
    reverse(vc.begin(), vc.end());
    int lp = n / vc[0];
    cout << lp << endl;
    for (int i = 0; i < lp; i++)
    {
        cout << vc[0] << " ";
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
    // cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}