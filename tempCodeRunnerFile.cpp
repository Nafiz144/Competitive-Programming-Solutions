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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> fre(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                fre[i]++;
            }
        }
        cout << n - (*max_element(fre.begin(), fre.end())) << endl;
    }
    return 0;
}