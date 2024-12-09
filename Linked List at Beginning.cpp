#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertnewnode(Node*& head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void display(Node* head){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=nullptr;

    insertnewnode(head, 10);
    insertnewnode(head, 20);
    insertnewnode(head, 30);

    cout<<"Linked List: ";
    display(head);

    return 0;
}