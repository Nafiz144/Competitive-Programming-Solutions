#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int i, a[6];
        for (i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        if (a[0] + a[1] + a[2] != a[3] + a[4] + a[5])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}