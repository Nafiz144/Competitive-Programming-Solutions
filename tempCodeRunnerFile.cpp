#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        cout << max(2 * ((x + k - 1) / k) - 1, 2 * ((y + k - 1) / k)) << endl;
    }
    return 0;
}
