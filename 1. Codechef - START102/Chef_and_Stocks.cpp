#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int min = INT_MAX;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] == min)
            {
                continue;
            }
            else
            {
                sum += arr[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}