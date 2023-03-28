#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt ;
};

class LinkedList
{
    node * head;

    LinkedList()
    {
        head =NULL;
    }
    void InsertAtHead()
    {

    }
    void Traverse()
    {

    }
    void SearchDistinctValue()
    {

    }
    void SearchAllValue()
    {

    }


};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();
    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);
    l.SearchAllValue(10);

    return 0;
}
