#include <bits/stdc++.h>
using namespace std;

int max_ele(int a[], int val ,int n)
{
   if(n<=0)
      return val;

   if(val < a[n])
      val = a[n];

   return max_ele(a, val, n-1);
}

int maxx(int a[], int n)
{
   return max_ele(a, a[0], n-1);
}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
      cin>>arr[i];

   cout<<maxx(arr, n);
   return 0;
}
