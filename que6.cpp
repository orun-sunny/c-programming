#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    vector<int>X(n);
    for(int i=0;i<n;i++)
    cin>>X[i];

    cin>>l>>r;
    X.erase(X.begin()+l-1,X.begin()+r);

    for(int i=0;i<X.size();i++)
    cout<<X[i]<<" ";
}

/*
6
1 4 6 2 8 7
2 4
*/
