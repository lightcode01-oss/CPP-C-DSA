#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class linklist{
    private:
    Node* head;
    public:
    linklist(){
        head = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            return;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head = newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        delete temp;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            return;
        }else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
     void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }

};


int main(){
    linklist ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
}