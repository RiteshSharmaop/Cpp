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


Node* predecessor(Node* curr){
    Node* pred = NULL;
    pred = curr->left;
    while(pred->right != NULL ){
        pred = pred->right;
    }
    return pred;
}
void print(Node* curr){
    while(curr != NULL){
        cout << curr -> data << " "; 
        curr = curr -> right;
    }
    cout << endl;
    
}
void FlattenABinaryTree(Node* root){
    Node* curr = root;
    while( curr != NULL){
        if(curr->left != NULL){
            Node* pred = NULL;
            pred = predecessor(curr);
            pred -> right = curr->right;
            curr -> right = curr->left;
            curr -> left = NULL;
        }
        curr = curr -> right;
    }
    print(root);
}
int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    
    FlattenABinaryTree(root);

    
    
    return 0;
}