
#include <bits/stdc++.h>
using namespace std;
int Subset(vector<int> arr1, vector<int> arr2, int a, int b)
{
//    Check First
    int i = 0, j = 0;
    if (b < a)
        return 0;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    //loop
    while (i < a && j < b)
    {
        if (arr1[i] > arr2[j])
            j++;
        else if (arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            return 0;
    }
    bool ans = true;
    if (i == a)
        ans = true;
    else
        ans = false;
    return ans;
}

int main()
{
    int a;
    cin >> a;
    vector<int> arr1(a);
    for (int i = 0; i < a; i++)
        cin >> arr1[i];
    int b;
    cin >> b;
    vector<int> arr2(b);
    for (int i = 0; i < b; i++)
        cin >> arr2[i];
    if (Subset(arr1, arr2, a, b) == true)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
