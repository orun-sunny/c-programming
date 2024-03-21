#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> dp;

int minOpera(int n) {
    if (n == 1) {
        return 0;
    }
    if (dp.find(n) != dp.end()) {
        return dp[n];
    }

    int ans = 1 + minOpera(n - 1);
    if (n % 2 == 0) {
        ans = min(ans, 1 + minOpera(n / 2));
    }
    if (n % 3 == 0) {
        ans = min(ans, 1 + minOpera(n / 3));
    }

    dp[n] = ans;
    return ans;
}

int main() {
    int n;
    cin >> n;
    int ans = minOpera(n);
    cout << ans << "\n";
    return 0;
}
