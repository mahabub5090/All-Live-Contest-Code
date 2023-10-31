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
bool isPal(string s)
{
    string cpy = s;
    reverse(cpy.begin(), cpy.end());
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] != cpy[i])
    //         return false;
    // }
    if (s != cpy)
        return false;
    return true;
}
void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    vector<string> vc;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i > j)
                continue;
            int ans = (arr[i] ^ arr[j]);

            string pir = to_string(ans);

            if (mp[pir] == 0)
            {
                mp[pir]++;
                if (isPal(pir))
                {
                    cnt++;
                    mp[pir] = 100;
                }
            }
            else
            {
                if (mp[pir] == 100)
                {
                    cnt++;
                }
            }

            // vc.push_back(pir);
        }
    }
    // for (string ans : vc)
    // {
    //     if (isPal(ans))
    //     {
    //         cnt++;
    //     }
    // }

    // cout << "next" << endl;
    cout << cnt << Endl;
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
        // int n = 30005;
        // string s = to_string(n);
        // cout << s + 1 << endl;
        solve();
    }
    return Allhamdulillah;
}