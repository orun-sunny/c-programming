#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>x(n);
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    cout<<(n*(n+1)/2)-sum;
}
