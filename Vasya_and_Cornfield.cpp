#include <bits/stdc++.h>

using namespace std;

int n, d;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> d;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;

        bool ok = true;
        if (!((x - y) <= d && (x - y) >= -d))
            ok = false;
        if (!((x + y) <= n + n - d && (x + y) >= d))
            ok = false;

        if (ok)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}