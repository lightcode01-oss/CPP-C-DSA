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
    void push_back(int val)
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
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printing()
    {
        if (head == NULL)
        {
            return;
        }
        cout << head->data << "->";
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
    c.push_back(2);
    c.push_back(3);
    c.push_back(4);
    c.printing();
}