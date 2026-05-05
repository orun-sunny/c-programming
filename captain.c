#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    string K;

    while (cin >> N >> K) {

        if (N == 1) {
            cout << "YES\n";
            continue;
        }

        long long rem = 0;
        for (char c : K) {
            rem = (rem * 10 + (c - '0')) % N;
        }
        long long pos = rem == 0 ? N : rem;

        if (pos == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
