#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    if(n == 0) {
        return 0;
    }
    return n%10 + sumOfDigit(n/10);
}

int main()
{
    int n;
    cin >> n;
    int sum = sumOfDigit(n);
    cout << sum << "\n";
    return 0;
}
