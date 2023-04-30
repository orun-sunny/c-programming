#include<bits/stdc++.h>
using namespace std;
bool isPalindrm(string s, int low, int high);
//main function
int main()
{
    string str;
    cin>>str;
    if(isPalindrm(str,0,str.length()-1))
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
}
//caculate
bool isPalindrm(string S, int low, int high)
{
    if(low>=high)
    return true;
    if(S[low]!=S[high])
    return false;

    return isPalindrm(S,low+1,high-1);
}
