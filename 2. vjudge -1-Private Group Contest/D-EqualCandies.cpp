#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int box;
        cin >> box;
        long long int cand[box];
        int min = INT_MAX;
        long long sum = 0;
        for (int i = 0; i < box; i++)
        {
            cin >> cand[i];
            if (cand[i] < min)
                min = cand[i];
            sum += cand[i];
        }
        long long total = min * box;
        cout << abs(total - sum) << endl;
    }

    return 0;
}