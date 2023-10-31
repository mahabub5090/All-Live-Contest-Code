#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
//wrong answer in pretest 2 
//accepted soluation: need to use map directly and if mp.cnt == fnd+1 cout cout YES otherwise cout NO;
bool check(string s)
{
    int ex = 0;
    map<char, int> mp;
    if (s.size() == 2)
    {
        if (s[0] == s[1])
            return true;
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto val : mp)
    {
        if (val.second % 2 != 0)
            ex++;
    }
    if (ex == 1 || ex == 0)
        return true;
    return false;
}
void solve()
{
    int n, fnd, cnt = 0;
    cin >> n >> fnd;
    string s, cmp;
    cin >> s;
    cmp = s;
    reverse(cmp.begin(), cmp.end());
    bool ans = false;
    string scmp;
    for (int i = 0; i < s.size(); i++)
    {
        if (check(s))
        {
            ans = true;
            break;
        }
        if (fnd == 0 || (fnd != 0 && fnd == cnt))
        {
            break;
        }

        if (s[i] == cmp[i])
            continue;
        else
        {
            if (cnt == fnd)
                break;

            cnt++;
            s.erase(i, 1);
            scmp = s;
            reverse(scmp.begin(), scmp.end());
            if (check(s))
            {
                ans = true;
                break;
            }
            else
            {
                if (cnt < fnd)
                {
                    cnt++;
                    s.erase(s.size() - (i + 1), 1);
                    scmp = s;
                    reverse(scmp.begin(), scmp.end());
                    if (check(s))
                    {
                        ans = true;
                        break;
                    }
                }
            }
        }
    }

    if (ans == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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