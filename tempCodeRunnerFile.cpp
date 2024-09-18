#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, r, k;
    cin >> l >> r >> k;

    if (r < k)
    {
        cout << -1 << endl;
        return 0;
    }

    // Calculate the maximum power of k within the range
    int max_power = floor(log(r) / log(k));

    // Print all numbers of the form kx within the range
    for (int power = 0; power <= max_power; ++power)
    {
        long long num = pow(k, power); // Use long long to avoid overflow
        if (num >= l && num <= r)
        {
            cout << num << endl;
        }
    }

    return 0;
}