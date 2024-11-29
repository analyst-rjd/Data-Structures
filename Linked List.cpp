#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

// Enqueue: Add an element to the queue
void enqueue(int value) {
    Node* newNode = new Node{value, nullptr};
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << value << " enqueued.\n";
}

// Dequeue: Remove an element from the queue
void dequeue() {
    if (front == nullptr) {  // Fixed condition
        cout << "Queue is empty.\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    cout << temp->data << " dequeued.\n";
    delete temp;
}

// Display the queue
void display() {
    if (front == nullptr) {  // Fixed condition
        cout << "Queue is empty.\n";
        return;
    }
    Node* temp = front;
    cout << "Queue: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();  // Optional: Demonstrating dequeue functionality
    display();
    return 0;
}
