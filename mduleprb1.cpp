#include <bits/stdc++.h>
using namespace std;

template<class X>
class Queue {
 public:
   X *a;
   int sz;
   int arr_cap;
   int l;
   int r;

   Queue() {
      a = new X[1];
      sz = 0;
      arr_cap = 0;
      l = 0;
      r = -1;
   }

   void removeCircular() {
      if( l>r ) {
         X *tmp = new X[arr_cap];
         int idx = 0;
         for( int i=l; i<arr_cap; i++ ) {
            tmp[idx] = a[i];
            idx++;
         }
         for( int i=0; i<r; i++ ) {
            tmp[idx] = a[i];
            idx++;
         }
         swap( a, tmp );
         delete []tmp;
         l=0;
         r=arr_cap-1;
      }
   }

   void increaseSize() {
      removeCircular();
      X *tmp = new X[arr_cap*2];
      for( int i=0; i<arr_cap; i++ )
         tmp[i] = a[i];

      swap( a, tmp );
      delete []tmp;
      arr_cap = arr_cap*2;
   }

   void decreaseSize() {
      removeCircular();
      X *tmp = new X[arr_cap/2];
      for( int i=0; i<arr_cap; i++ )
         tmp[i] = a[i];

      swap( a, tmp );
      delete []tmp;
      arr_cap = arr_cap/2;
   }

   void enqueue(X val) {
      if(sz == arr_cap) {
         increaseSize();
      }

      r++;
      if(r == arr_cap)
         r = 0;
      a[r] = val;
      sz++;
   }

   void dequeue() {
      if(sz == 0) {
         cout<<"Queue is fully empty!\n";
         return ;
      }
      if(sz == arr_cap/2) {
         decreaseSize();
      }

      a[l] = 0;
      l++;
      if(l == arr_cap)
         l=0;

      sz--;
   }

   X front(){
      if(sz == 0)
      {
         cout<<"Queue is fully empty!\n";
         X a;
         return a;
      }
      return a[l];
   }

};

int main() {
   Queue<int> q;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);

   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();

   return 0;
}
