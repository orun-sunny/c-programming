#include <bits/stdc++.h>
using namespace std;

const int max_sz = 100;

class Queue {
 public:
   int a[max_sz];
   int l;
   int r;
   int siz;

   Queue() {
      l = 0;
      r = -1;
      siz = 0;
   }

   void enqueue( int val ) {
      if( r+1 == max_sz ) {
         cout<<"Max capacity reached!\n";
         return ;
      }

      r++;
      if( r == max_sz ) {
         r=0;
      }
      a[r] = val;
      siz++;
   }

   void dequeue() {
      if( siz==0 ) {
         cout<<"Queue is full empty!\n";
         return;
      }
      a[l] = 0;
      l++;
      if( l == max_sz )
         l=0;
      siz--;
   }

   int front() {
      if( siz==0 ) {
         cout<<"Queue is empty!\n";
         return -1;
      }
      return a[l];
   }

   int getSize() {
      return siz;
   }
};

int main() {
   Queue q;
   q.enqueue( 10 );
   q.enqueue( 6 );
   q.enqueue( 12 );

   cout<<"Queue size = "<<q.getSize()<<"\n";

   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<"Queue size = "<<q.getSize()<<"\n";
   return 0;
}
