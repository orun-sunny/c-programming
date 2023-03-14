#include <bits/stdc++.h>

using namespace std;
int main()
{

    int a[10];
    for (int i=0; i<10; i++)
        cin >>a[i];

    int sum =0;
    for(int i=0; i<10; i++)
        sum=sum+a[i];


    cout<<sum<<"\n";
    return 0;
}
