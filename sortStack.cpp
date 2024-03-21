#include<bits/stdc++.h>
using namespace std;

void sort_stack(stack<int> &N)
{
    stack<int> tmp;
    while(!N.empty())
    {
        int x = N.top();
        N.pop();
        while(!tmp.empty() && tmp.top()<x)
        {
            int y= tmp.top();
            tmp.pop();
            N.push(y);
        }
        tmp.push(x);
    }
    swap(tmp,N);
}

int main()
{
    stack<int> N;

    N.push(3);
    N.push(4);
    N.push(6);
    N.push(2);
    N.push(5);

    sort_stack(N);

    while(!N.empty())
    {
        cout << N.top() << ' ';
        N.pop();
    }
    return 0;
}

