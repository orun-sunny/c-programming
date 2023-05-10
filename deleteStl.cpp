#include <bits/stdc++.h>
using namespace std;
//printlisthere
void printListHere( list <int> l ) {
   auto it = l.begin();
   while( it != l.end() ) {
      cout<<*it<<" ";
      it++;
   }
   cout<<"\n";
}

void deleteValueHere( list<int>&l, int value ) {
   auto it = l.begin();
   int idx = 0;
   while( it != l.end() ) {
      if( *it == value )
      {
         l.erase( it );
         break;
      }
      it++;
   }
}

int main() {

   list<int> l;
   l.push_front( 4 );
   l.push_front( 5 );
   l.push_front( 4 );
   l.push_front( 8 );
   l.push_front( 3 );
   l.push_front( 7 );
   printListHere( l );
   deleteValueHere( l, 4 );
   printListHere( l );
   return 0;
}
