#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const int MAXA = 500000;

vector<int> spf(MAXA + 1);

void sieve() {
    for (int i = 0; i <= MAXA; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXA; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        unordered_map<int, long long> mp;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            while (a > 1) {
                int p = spf[a];
                long long cnt = 0;

                while (a % p == 0) {
                    cnt++;
                    a /= p;
                }

                mp[p] += cnt;
            }
        }

        long long ans = 1;

        for (auto &it : mp) {
            ans = (ans * ((it.second + 1) % MOD)) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}