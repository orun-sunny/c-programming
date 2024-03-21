#include <bits/stdc++.h>
using namespace std;

template<class T>
class node {
 public:
   T data;
   node* nxt;
};

template<class T>
class SinglyLinkedL {
 public:
   node<T>* head;
   int sz;

   SinglyLinkedL() {
      head = NULL;
      sz = 0;
   }

   node<T>* CreateNewNode( T val ) {
      node<T>* new_node = new node<T>;
      new_node->data = val;
      new_node->nxt = NULL;
      return new_node;
   }

   void InsertHead( T val ) {
      sz++;
      node<T>* newNode = CreateNewNode( val );
      if( sz==0 ) {
         head = newNode;
         return;
      }

      newNode->nxt = head;
      head = newNode;
   }

   void RemoveFromHead() {
      if( sz==0 ) {
         cout<<"Stack is full empty!\n";
         return;
      }
      sz--;
      node<T>* a = head;
      head = head->nxt;

      delete a;
   }

   void Traverse() {
      node<T>* a = head;
      while( a!=NULL ) {
         cout<<a->data<<" ";
         a = a->nxt;
      }
      cout<<"\n";
   }
};

template<class T>
class Stack {
 public:
   SinglyLinkedL<T> sl;

   Stack(){
   }

   void pushToStack( T val ) {
      sl.InsertHead( val );
   }

   void popFromStack() {
      sl.RemoveFromHead();
   }

   void traverseStack() {
      sl.Traverse();
   }

   T top(){
      if(sl.sz == 0)
      {
         cout<<"Stack is fully empty!\n";
         T a;
         return a;
      }
      return sl.head->data;
   }
};

int main() {
   Stack<int> st;

   st.pushToStack( 5 );
   st.pushToStack( 20 );
   cout<<"Top -> "<<st.top()<<"\n";
   st.pushToStack( 15 );

   st.traverseStack();

   return 0;
}
