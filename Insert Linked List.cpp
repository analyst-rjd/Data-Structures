#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void Display(Node* head){
    if(head==nullptr){
        cout<<"The List is Empty"<<endl;
        return;
    }

    Node* temp=head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=nullptr;
    InsertAtBeginning(head, 10);
    InsertAtBeginning(head, 20);
    InsertAtBeginning(head, 30);

    cout<<"Linked List: ";
    Display(head);

    return 0;
}