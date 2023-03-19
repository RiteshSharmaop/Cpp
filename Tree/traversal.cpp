#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }

};

Node* buildTree(){
    cout<<"Enter Data : "<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;
    Node* newNode = new Node(data);

    cout<<"Enter Data for Left Child of "<<data<<endl;
    newNode->left = buildTree();

    cout<<"Enter Data for right Child of "<<data<<endl;
    newNode->right = buildTree();

    return newNode;
}

void preOrder(Node* &root){
    if(root == NULL) return;

    cout << root->data << endl;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* &root){
    if(root == NULL) return;

    inOrder(root->left);
    cout << root->data << endl;
    inOrder(root->right);
}

void PostOrder(Node* &root){
    if(root == NULL) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << endl;
}

int main() {
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    cout<<endl;
    cout<<" Pre - Order " <<endl;
    preOrder(root);
    cout<<endl;
    cout<<" in - Order " <<endl;
    inOrder(root);
    cout<<endl;
    cout<<" Post - Order " <<endl;
    PostOrder(root);
    return 0;
}