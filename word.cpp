#include <bits/stdc++.h>
using namespace std;
int main ()
{

int  upper =0,lower =0;
    string s;
    cin >> s;
    for(int i=0; i <s.size(); i++)
    {
        if(isupper(s[i]))
        {
            upper++;
        }
        else
        {

            lower ++;
        }


    }

    if(upper > lower)
    {
        for (int i =0;i<s.size();i ++)
        {
            cout << char(toupper(s[i]));
        }

    }
    else{
        for (int i =0 ;i <s.size() ; i++)
        {
            cout << char(tolower(s[i]));
        }
    }
    return 0;
}
