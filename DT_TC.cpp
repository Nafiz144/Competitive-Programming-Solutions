#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int an = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            an++;
        else
            an += n - 1;
    }

    cout << an << '\n';
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
}
