#include <bits/stdc++.h>
using namespace std;

void _merge( string str[], int left, int mid, int right ) {
   int x1 = mid - left + 1;
   int x2 = right - mid;

   string str1[x1], str2[x2];

   for( int i=0; i<x1; i++ )
      str1[i] = str[left+i];

   for( int i=0; i<x2; i++ )
      str2[i] = str[i+mid+1];

   int prx1=0, prx2=0, prxT=left;
   while( ( prx1 < x1 ) && ( prx2< x2 ) ) {
      if( str1[prx1] < str2[prx2] ) {
         str[prxT] = str1[prx1];
         prx1++;
         prxT++;
      } else {
         str[prxT] = str2[prx2];
         prx2++;
         prxT++;
      }
   }
   while( prx1 < x1 ) {
      str[prxT] = str1[prx1];
      prx1++;
      prxT++;
   }
   while( prx2 < x2 ) {
      str[prxT] = str2[prx2];
      prx2++;
      prxT++;
   }
}

void mergeSort( string str[], int left, int right ) {
   if( left<right ) {
      int mid = ( left+right )/2;
      mergeSort( str, left, mid );
      mergeSort( str, mid+1, right );
      _merge( str, left, mid, right );
   }
}

int main() {
   int n;
   cin>>n;

   string a[n];
   for( int i=0; i<n; i++ ) {
      cin>>a[i];
   }

   mergeSort( a, 0, n-1 );

   for( int i=0; i<n; i++ ) {
      cout<<a[i]<<" ";
   }
}
