#include<iostream>
#include<queue>
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


// L N R
void inOrder(Node* &root){
    if(root == NULL) return;

    // L
    inOrder(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrder(root->right);
}

Node* predecessor(Node* root){
    if(root == NULL) return NULL;
    Node* curr = root->left;
    if(curr != NULL) {
        while(curr-> right != NULL){
            curr = curr -> right;
        }
    } 
    return curr;
}
Node* successor(Node* root){
    if(root == NULL) return NULL;
    Node* curr = root->right;
    if(curr != NULL) {
        while(curr-> left != NULL){
            curr = curr -> left;
        }
    } 

    return curr;
}
int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // 3 5 8 -1 -1 2 -1 -1 7 -1 6 -1 -1 
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    cout<<endl;
    
    cout<<"In - Order " <<endl;
    inOrder(root);
    
    cout << endl << endl;;
    cout << predecessor(root)->data << endl;
    cout << successor(root)->data << endl;

    
    
    return 0;
}