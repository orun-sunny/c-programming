
#include <bits/stdc++.h>
using namespace std;

int main() {
   string str;
   cin>>str;

   stack<char> stk;

   for( int i=0; i<str.size(); i++ ) {

      char ch = str[i];
      // Function to check whether two characters are opening
// and closing of same type.

      if( ch == '(' || ch == '{' || ch == '[' )
         stk.push( ch );
      else {
         if( stk.empty() ) {
            cout<<"No\n";
            return 0;
         }
         if( ( stk.top() == '(' && ch == ')' ) || ( stk.top() == '{' && ch == '}' ) || ( stk.top() == '[' && ch == ']' ) )
            stk.pop();
         else {
            cout<<"No";
            return 0;
         }
      }
   }

   if( stk.empty() ) {
      cout<<"Yes\n";
   } else {
      cout<<"No\n";
   }
   return 0;
}

