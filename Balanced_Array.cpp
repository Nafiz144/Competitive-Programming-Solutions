#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            for (i = 1; i <= n / 2; i++)
            {
                cout << (2 * i) << " ";
            }
            for (i = 1; i < n / 2; i++)
            {
                cout << (2 * i - 1) << " ";
            }
            cout << (n / 2 + n - 1) << endl;
        }
    }
}