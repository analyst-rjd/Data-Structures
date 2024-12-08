#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value): data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value){
    if(root==nullptr)
        return new Node(value);
    if (value<root->data)
        root->left = insert(root->left, value);
    if (value>root->data)
        root->right = insert(root->right, value);
    
    return root;
}

void inorder(Node* root){
    if(root==nullptr)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=nullptr;

    root= insert(root,50);
        insert(root,30);
        insert(root,70);
        insert(root, 40);
        insert(root, 20);
        insert(root,60);

    cout<<"Inorder Traversal:";
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal:";
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal:";
    postorder(root);
    cout<<endl;


    return 0;

}