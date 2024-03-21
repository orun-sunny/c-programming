#include <bits/stdc++.h>
using namespace std;

template<class X>
class node {
 public:
   X data;
   node* next;
   node* prev;
};

template<class X>
class Deque {
 public:
   node<X>* head;
   node<X>* tail;
   int sz;

   Deque() {
      head = NULL;
      tail = NULL;
      sz = 0;
   }

   node<X>* CreateNewNode ( X val ) {
      node<X>* new_node = new node<X>;
      new_node->data = val;
      new_node->next = NULL;
      new_node->prev = NULL;
      return new_node;
   }

   void push_front( X val ) {
      node<X>* newNode = CreateNewNode( val );
      if( sz == 0 ) {
         head = newNode;
         tail = newNode;
         sz++;
         return;
      }

      newNode->next = head;
      head->prev = newNode;
      head = newNode;
      sz++;
   }
   void push_back( X val ) {
      node<X>* newNode = CreateNewNode( val );
      if( sz == 0 ) {
         head = newNode;
         tail = newNode;
         sz++;
         return;
      }

      newNode->prev= tail;
      tail->next = newNode;
      tail = newNode;
      sz++;
   }

   void pop_front() {
      if( sz == 0 ) {
         cout<<"Deque is empty!\n";
         return ;
      }

      if( sz == 1 ) {
         delete head;
         head = NULL;
         tail = NULL;
         sz--;
         return;
      }
      node<X>* a = head;
      head = head->next;
      head->prev = NULL;
      delete a;
      sz--;
   }
   void pop_back() {
      if( sz == 0 ) {
         cout<<"Deque is empty!\n";
         return ;
      }

      if( sz == 1 ) {
         delete head;
         head = NULL;
         tail = NULL;
         sz--;
         return;
      }
      node<X>* a = tail;
      tail = tail->prev;
      tail->next= NULL;
      delete a;
      sz--;
   }

   int front() {
      if( sz == 0 ) {
         cout<<"Deque is empty!\n";
         X a;
         return a;
      }
      return head->data;
   }

   int back() {
      if( sz == 0 ) {
         cout<<"Deque is empty!\n";
         X a;
         return a;
      }
      return tail->data;
   }
   void Traverse() {
      node<X>* a = head;
      while( a != NULL ) {
         cout<<a->data<<" ";
         a = a->next;
      }
      cout<<"\n";
   }
};

int main() {

   Deque<int> d;
   d.push_front( 5 );
   d.push_front( 20 );
   d.push_front( 25 );
   d.Traverse();
   d.push_back( 30 );
   d.Traverse();
   cout<<"Front --> "<<d.front()<<" Back --> "<<d.back()<<"\n";

   d.pop_front();
   d.Traverse();
   d.pop_back();
   d.Traverse();
   return 0;
}
