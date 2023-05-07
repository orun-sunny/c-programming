
#include <bits/stdc++.h>
using namespace std;

//  string into number
int getNumber( char c ) {
   int value;
   value = c;
   int val = int( value-'0' );
   return val;
}

// checking operator
int isOperator( char ch ) {
   if( ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^' )
      return 1;
   return -1;
}

int isOperandCheck( char ch ) {
   if( ch >= '0' && ch <= '9' )
      return 1;
   return -1;
}

// get all types of operation
int operation( int a, int b, char sign ) {
   int val;
   if( sign == '+' )
      val = b+a;
   else if( sign == '-' )
      val = b-a;
   else if( sign == '*' )
      val = b*a;
   else if( sign == '/' )
      val = b/a;
   else if( sign == '^' )
      val = pow( b,a );
   else
      val = INT_MIN;

   return val;
}

//all get precision
int prec( char ch ) {
   if( ch == '-' || ch == '+' )
      return 1;
   else if( ch == '*' || ch == '/' )
      return 2;
   else if( ch == '^' )
      return 3;
   else
      return 0;
};

// postfix function
int check( string str ) {
   stack<int> st2;

   for( int i=0; i<str.size(); i++ ) {
      char ch = str[i];
      // if character is operand push it to stack
      if( isOperandCheck( ch ) > 0 )
         st2.push( getNumber( ch ) );
      else if( isOperator( ch ) != -1 ) {

         int num1 =  st2.top() ;
         st2.pop();
         int num2 = st2.top() ;
         st2.pop();
         st2.push( operation( num1, num2, ch ) );
      }
   }

   return st2.top();
}

int main() {
   string s;
   cin>>s;

   stack<char> st;
   string ans;
   for( int i=0; i<s.size(); i++ ) {
      char now = s[i];

      if( ( now >= 'a' && now <= 'z' ) || ( now >= 'A' && now <= 'Z' ) || ( now>='0' && now<='9' ) )
         ans+= now;
      else if( now == '(' )
         st.push( now );
      else if( now == ')' ) {
         while( st.top() != '(' ) {
            ans += st.top();
            st.pop();
         }
         st.pop();
      } else {
         while( st.size() && prec( st.top() ) >= prec( now ) ) {
            ans+= st.top();
            st.pop();
         }
         st.push( now );
      }
   }

   while( st.size() ) {
      ans += st.top();
      st.pop();
   }

   cout<<check( ans )<<"\n";
   return 0;
}
