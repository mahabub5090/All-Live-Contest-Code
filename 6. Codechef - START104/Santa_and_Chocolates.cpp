#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < n)
    {
        cout << "NO\n";
    }
    else if (sum % n != 0 && k == 0) // try after contest
    {
        cout << "NO\n";
    }
    else if (n <= 2 && sum % n > k)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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