#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
void solve() {

    int x, y;
    cin >> x >> y;
    if (x % y == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        solve();
    }



    return 0;
}