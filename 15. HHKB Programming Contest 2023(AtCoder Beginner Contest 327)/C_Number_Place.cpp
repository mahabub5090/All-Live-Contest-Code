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
#define yes cout << "Yes\n"
#define no cout << "No\n"
// Accepted but after the contest (40 mins late),i took total 2 hrs to solve this problem.
// problem link:https://atcoder.jp/contests/abc327/tasks/abc327_c
void solve()
{

    int arr[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    // return;

    bool row = true, col = true;
    vector<vector<int>> vcr(9), vcc(9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            vcr[i].push_back(arr[i][j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            vcc[i].push_back(arr[j][i]);
        }
    }
    // vcr ,vcc condition check
    for (vector<int> val : vcr)
    {
        sort(val.begin(), val.end());
        for (int i = 0; i < 9; i++)
        {
            // cout << val[i] << " ";
            if (val[i] == i + 1)
                continue;
            else
                row = false;
        }
        // cout << Endl;
    }
    for (vector<int> val : vcc)
    {
        sort(val.begin(), val.end());
        for (int i = 0; i < 9; i++)
        {
            // cout << val[i] << " ";
            if (val[i] == i + 1)
                continue;
            else
                col = false;
        }
        // cout << Endl;
    }

    // condition for 3*3 grid
    bool con = true;
    vector<vector<int>> vc(9);

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vc[0].push_back(arr[i][j]);
        }
    }
    for (int i = 3; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vc[1].push_back(arr[i][j]);
        }
    }
    for (int i = 6; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vc[2].push_back(arr[i][j]);
        }
    }
    //
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            vc[3].push_back(arr[i][j]);
        }
    }
    for (int i = 3; i < 6; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            vc[4].push_back(arr[i][j]);
        }
    }
    for (int i = 6; i < 9; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            vc[5].push_back(arr[i][j]);
        }
    }
    //
    for (int i = 0; i < 3; i++)
    {
        for (int j = 6; j < 9; j++)
        {
            vc[6].push_back(arr[i][j]);
        }
    }
    for (int i = 3; i < 6; i++)
    {
        for (int j = 6; j < 9; j++)
        {
            vc[7].push_back(arr[i][j]);
        }
    }
    for (int i = 6; i < 9; i++)
    {
        for (int j = 6; j < 9; j++)
        {
            vc[8].push_back(arr[i][j]);
        }
    }
    //
    // for (vector<int> val : vc)
    // {
    //     sort(val.begin(), val.end());
    // }
    //

    for (vector<int> val : vc)
    {
        sort(val.begin(), val.end());
        for (int i = 0; i < 9; i++)
        {
            // cout << val[i] << " ";
            if (val[i] == i + 1)
                continue;
            else
                con = false;
        }
        // cout << Endl;
    }

    // ans

    // if (con)
    if (con && row && col)
    {
        yes;
    }
    else
        no;
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