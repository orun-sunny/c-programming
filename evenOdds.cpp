#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k,p,out;
    cin >> n >> k;
    if(n%2 == 0)
    {
        p = n/2;
    }
    else{
        p = n/2 +1;
    }
    if(k <= p)
    {
        out = (2*k)-1;
    }
    else{
        out =(k - p)*2;
    }
    cout<< out << endl;

    return 0;

}
