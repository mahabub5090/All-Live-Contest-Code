#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        int vis[n * 2] = {0};
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            vis[arr[i]]++;
            if (vis[arr[i]] >= 3)
            {
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        ans.empty() ? cout << -1 << endl : cout << ans[0] << endl;
    }
    return 0;
}