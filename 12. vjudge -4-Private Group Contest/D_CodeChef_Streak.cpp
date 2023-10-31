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
// ACCEPTED
void solve()
{

    int n;
    cin >> n;
    int om[n];
    for (int i = 0; i < n; i++)
    {
        cin >> om[i];
    }
    int ady[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ady[i];
    }

    vector<int> vom, vad;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (om[i] != 0)
            cnt++;
        else
        {
            vom.push_back(cnt);
            cnt = 0;
        }
    }
    vom.push_back(cnt);
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ady[i] != 0)
            cnt++;
        else
        {
            vad.push_back(cnt);
            cnt = 0;
        }
    }
    vad.push_back(cnt);
    sort(vom.begin(), vom.end(), greater<>());
    sort(vad.begin(), vad.end(), greater<>());
    int mxo = vom[0], mxa = vad[0];
    if (mxo == mxa)
        cout << "Draw\n";
    else if (mxo > mxa)
        cout << "Om\n";
    else
        cout << "Addy\n";
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