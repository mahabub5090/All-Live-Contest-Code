#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;cin>>n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        int ans = arr2[i] - arr[i];
        vc.push_back(ans);
    }

    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << " ";
    }
    cout << endl;
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