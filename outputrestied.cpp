#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Front and Rear pointers
Node* front = NULL;
Node* rear = NULL;

// 🔸 Input Restricted (Insert only at rear)
void inputRestricted(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted (Input Restricted)\n";
}

// 🔸 Output Restricted (Delete only from front)
void outputRestricted() {
    if (front == NULL) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " deleted (Output Restricted)\n";

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// 🔸 Main
int main() {
    inputRestricted(10);
    inputRestricted(20);
    inputRestricted(30);

    display();

    outputRestricted();
    display();

    return 0;
}