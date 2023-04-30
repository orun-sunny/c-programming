#include <bits/stdc++.h>
using namespace std;
vector<int>quickSrt(vector<int>a);
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans=quickSrt(a);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}
vector<int>quickSrt(vector<int>a)
{
    if(a.size()<=1)
    return a;
    vector<int>b;
    vector<int>c;
//declare-here
    int pivot = rand()%(a.size());
    for(int i=0;i<a.size();i++)
    {
        if(i==pivot)
        {
            continue;
        }
        if(a[i]<=a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int>sorted_b=quickSrt(b);
    vector<int>sorted_c=quickSrt(c);
    vector<int>sorted_a;
    for(int i=0;i<sorted_b.size();i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for(int i=0;i<sorted_c.size();i++)
//        sorted here
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}
