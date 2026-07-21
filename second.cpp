// AI Finds Nothing Here-2240B
#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
const int MOD = 998244353;

long long modPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (long long)((__int128)res * a % MOD);
        }
        a = (long long)((__int128)a * a % MOD);
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long exponent =
            n * (c - 1) +
            m * (r - 1) -
            (r - 1) * (c - 1);

        cout << modPow(2, exponent) << '\n';
    }

    return 0;
}
