#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin>>n;
   map<string, int> mpx;
   for( int i=0; i<n; i++ ) {
      string word;
      cin>>word;

      if(mpx.count(word) == 0)
         cout<<-1<<"\n";
      else
         cout<<mpx[word]<<"\n";

      mpx[word] = i;
   }

   return 0;
}

