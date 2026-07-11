#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int M = 47;

    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = (fact * i) % M;
    }
    cout << "Factorial:" << fact << endl;

    return 0;
}