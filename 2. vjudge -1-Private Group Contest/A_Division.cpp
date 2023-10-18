#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        (s <= 1399) ? cout << "Division 4\n" : (s <= 1599) ? cout << "Division 3\n"
                                           : (s <= 1899)   ? cout << "Division 2\n"
                                                           : cout << "Division 1\n";
    }
    return 0;
}

/*
For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399
*/
// Division 4 
// Division 4
// Division 4
// Division 4
// Division 3
// Division 2
// Division 1