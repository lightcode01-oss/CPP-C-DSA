#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Circular
{
private:
    Node *head;
    Node *tail;

public:
    Circular()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void printing()
    {
        if (head == NULL)
        {
            return;
        }
        cout << head->data << "-> ";
        Node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        
    }
};
int main()
{
    Circular c;
    c.push_front(2);
    c.push_front(3);
    c.push_front(4);
    c.printing();
}