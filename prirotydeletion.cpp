#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    int priority;
    Node* next;
};

// Front pointer
Node* front = NULL;

// 🔸 Priority Insertion
void priorityInsert(int value, int prio) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->priority = prio;
    newNode->next = NULL;

    // Insert at beginning (highest priority)
    if (front == NULL || prio < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        Node* temp = front;

        // Find correct position
        while (temp->next != NULL && temp->next->priority <= prio) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << value << " inserted with priority " << prio << endl;
}

// 🔸 Priority Deletion (remove highest priority)
void priorityDelete() {
    if (front == NULL) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " deleted (highest priority)\n";

    front = front->next;
    delete temp;
}

// 🔸 Display
void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    cout << "Queue: ";

    while (temp != NULL) {
        cout << "[" << temp->data << ", P=" << temp->priority << "] ";
        temp = temp->next;
    }
    cout << endl;
}

// 🔸 Main
int main() {
    priorityInsert(10, 2);
    priorityInsert(20, 1);
    priorityInsert(30, 3);
    priorityInsert(40, 0);

    display();

    priorityDelete();
    display();

    return 0;
}