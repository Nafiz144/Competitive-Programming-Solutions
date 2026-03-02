#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxVal = -1, count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x > maxVal) {
                maxVal = x;
                count = 1;
            }
            else if (x == maxVal) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}