#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        ll int arr[n];
        for (ll int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool fg = true;

        if (n == 1)
        {
            if (arr[0] % 2 == 0 || (arr[0] + 1) % 2 == 0)
                cout << "YES\no";
            else
                cout << "NO\n";
            break;
        }
        for (ll int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                fg = false;
                break;
            }
        }

        if (fg == false)
        {
            fg = true;
            for (ll int i = 0; i < n; i += 2)
            {
                arr[i] = arr[i] + 1;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    fg = false;
                    break;
                }
            }
        }
        for (ll int i = 0; i < n; i += 2)
        {
            arr[i] = arr[i] - 1;
        }
        if (fg == false)
        {

            fg = true;

            for (ll int i = 1; i < n; i += 2)
            {
                arr[i] = arr[i] + 1;
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    fg = false;
                    break;
                }
            }
        }

        (fg) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}