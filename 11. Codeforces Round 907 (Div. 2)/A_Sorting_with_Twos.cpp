#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
// not solved
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sm = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm = min(sm, arr[i]);
    }
    int mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, arr[i]);

        if (arr[i] > arr[i + 1])
        {
            if (arr[i] - arr[i + 1] < arr[i])
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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