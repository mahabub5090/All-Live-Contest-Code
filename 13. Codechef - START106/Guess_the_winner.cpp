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
//not solved
void solve()
{

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "Alice\n";
        return;
    }
    if (n == 2)
    {
        cout << "Bob\n";
        return;
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i == j)
                continue;
            if (i % j == 0)
                a = 1;
        }
    }
    if (a = 1)
    {
        cout << "Alice\n";
        return;
    }
    cout << "Bob\n";
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