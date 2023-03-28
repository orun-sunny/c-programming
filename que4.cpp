
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class LinkedList
{
public:
    int len;
    node *head;
    LinkedList()
    {
        head=NULL;
        len =0;
    }
    //createnode
    node* createNewNode(int data)
    {
        node *newNode = new node;
        newNode->data=data;
        newNode->next=NULL;
        len++;
        return newNode;
    }
    void insertAtHead(int data)
    {
        node* a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
        }
        else
        {
            a->next=head;
            head=a;
        }
    }
    int getSize()
    {
        return len;
    }
    //get value
    int getValue( int idx )
    {
        node* a = head;
        int cnt = 0;
        if( idx>= len )
            return -1;
        while( a != NULL )
        {
            if( cnt == idx )
                return ( a->data );
            cnt++;
            a = a->next;
        }

        assert( 0 );
    }

    void printReverse()
    {
        node *a=head;
        vector<int>value;
        while(a!=NULL)
        {
            value.push_back(a->data);
            a=a->next;
        }
        reverse(value.begin(),value.end());
        for(int i=0; i<value.size(); i++)
            cout<<value[i]<<" ";
        cout<<endl;
    }
    void traverse()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }

    void swapFirst()
    {
        if( len < 2 )
            return;
        node* temp = head->next;
        head->next = temp->next;
        temp->next = head;
        head = temp;

    }

};


int main()
{
    LinkedList l;
    cout<<l.getSize()<<endl;
    l.insertAtHead(5);
    cout<<l.getSize()<<endl;
    l.insertAtHead(6);
    l.insertAtHead(30);
    cout<<l.getSize()<<endl;
    l.insertAtHead(20);
    l.insertAtHead(30);
    cout<<l.getValue(2)<<endl;
    cout<<l.getValue(6)<<endl;
    l.printReverse();
    l.traverse();
    l.swapFirst();
//    cout<<"don't touch this\n";
    l.traverse();
    l.printReverse();
}
