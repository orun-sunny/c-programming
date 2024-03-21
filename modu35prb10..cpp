#include <bits/stdc++.h>
using namespace std;

int main() {
   int X;
   cin>>X;
   set<int> st;

   for( int i=0; i<X; i++ ) {
      int val;
      cin>>val;
      st.insert( val );
   }
   int k;
   cin>>k;

   for( int i=0; i<k; i++ ) {
      int val;
      cin>>val;
      st.insert( val );
   }
   for(auto i: st)
      cout<<i<<" ";
   cout<<"\n";

   return 0;
}
