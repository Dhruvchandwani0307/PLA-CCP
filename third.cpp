//Palindrome , Twelve and two terms-2234B
#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<unsigned long long> pal = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11
    };

    int t;
    cin >> t;

    while (t--) {
        unsigned long long n;
        cin >> n;

        unsigned long long a = pal[n % 12];

        if (a > n) {
            cout << "-1\n";
        } else {
            cout << a << ' ' << (n - a) << '\n';
        }
    }

    return 0;
}
