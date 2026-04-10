#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Stack
{
    private:
    Node* top;
    public:
    Stack()
    {
        top=NULL;
    }
    void push(int data)
    {
        Node* newNode=new Node(data);
        if(top==NULL)
        {
            top=newNode;
            return;
        }
        else
        {
            newNode->next=top;
            top=newNode;
        }
    }
    void display()
    {
        Node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    return 0;
}
