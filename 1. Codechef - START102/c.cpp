#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        // float ps = 20 * 0.20 * 25;
        // float ps = x * 0.20;
        int i = 1;
        while (true)
        {
           double gt = x * i * 0.2;
            // cout << gt << " ";
            if (gt >= 100 || gt >= 100.00)
            {
                cout << i;
                break;
                //    return 0;
            }
            else
            {
                i++;
            }
        }
        cout << endl;
        // cout << ps<<" ";
    }
    // cout << ;
    return 0;
}