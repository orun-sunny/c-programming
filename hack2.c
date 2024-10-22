#include <stdio.h>
#include <string.h>

#define MOD 1000000007
#define P "orbitaxian"
#define P_LENGTH 10

long long count_valid_subsequences(char *S, int N, int K) {
    long long dp[P_LENGTH + 1]; // dp[i] counts subsequences forming P[0..i-1]
    memset(dp, 0, sizeof(dp)); // Initialize dp array to zero
    dp[0] = 1; // Base case: one way to form the empty subsequence

    // To keep track of last valid indices for P's characters
    int last_valid[P_LENGTH]; // Array to store last indices
    memset(last_valid, -1, sizeof(last_valid)); // Initialize to -1

    // Iterate through each character in the string S
    for (int i = 0; i < N; i++) {
        for (int j = P_LENGTH - 1; j >= 0; j--) {
            // If character matches the pattern
            if (S[i] == P[j]) {
                if (last_valid[j] == -1) {
                    // First occurrence of P[j]
                    dp[j + 1] = (dp[j + 1] + dp[j]) % MOD;
                } else {
                    // Check if the last valid index is within the allowed range
                    if (i - last_valid[j] <= K) {
                        dp[j + 1] = (dp[j + 1] + dp[j]) % MOD;
                    }
                }
                // Update the last valid index for P[j]
                last_valid[j] = i;
            }
        }
    }

    return dp[P_LENGTH]; // Return the count of valid subsequences
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Read N and K
        char S[200001]; // Declare a string with max length 200000
        scanf("%s", S); // Read the string

        long long result = count_valid_subsequences(S, N, K); // Count valid subsequences
        printf("%lld\n", result); // Print the result for each test case
    }

    return 0;
}
