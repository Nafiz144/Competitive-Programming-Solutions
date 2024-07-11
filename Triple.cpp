/*#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int c = 0, v = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {

            c++;
            v = a[i];
            break;
        }
    }
    c++;
    if (v == 0)
    {
        cout << "-1" << endl;
    }
    cout << v << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}*/
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
        vector<int> cnt(n + 1, 0);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (++cnt[x] >= 3)
            {
                ans = x;
            }
        }
        cout << ans << endl;
    }
}