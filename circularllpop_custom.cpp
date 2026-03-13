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

void pop_custom(int pos)
{
if (head == NULL)
{
cout << "List is empty\n";
return;
}

Node *temp = head;

// Delete first node
if (pos == 1)
{
Node *delNode = head;

if (head == tail) // only one node
{
head = tail = NULL;
}
else
{
head = head->next;
tail->next = head;
}

delete delNode;
return;
}

// Traverse to (pos-1)
for (int i = 1; i < pos - 1; i++)
{
temp = temp->next;

if (temp->next == head)
{
cout << "Position out of range\n";
return;
}
}

Node *delNode = temp->next;
temp->next = delNode->next;

if (delNode == tail)
tail = temp;

delete delNode;
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
c.push_front(1);
c.push_front(2);
c.push_front(3);
c.push_front(4);
c.printing();
cout<<endl;
c.pop_custom(3);
c.printing();
}