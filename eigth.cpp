//A - Team-231A
#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, count = 0;
    cin >> n;

    while (n--) {
        cin >> a >> b >> c;

        if (a + b + c >= 2)
            count++;
    }

    cout << count;

    return 0;
}
