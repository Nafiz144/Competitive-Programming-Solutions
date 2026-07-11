#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
void solve() {

    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];

    }

    auto  max = *max_element(a.begin(), a.end());

    auto min = *min_element(a.begin(), a.end());
    cout << (max + 1) - min << endl;








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