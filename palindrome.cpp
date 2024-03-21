#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    deque<char>dque;
    for(int i=0;i<str.size();i++)
    {
        dque.push_back(str[i]);
    }
    bool result=true;
    for(int i=0;i<dque.size();i++)
    {
        if(dque.front()!=dque.back())
        {
            result = false;
            break;
        }
        dque.pop_front();
        dque.pop_back();
    }
    if(result)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
