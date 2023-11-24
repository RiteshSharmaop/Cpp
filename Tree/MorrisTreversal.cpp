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
Node* predecessor(Node* pred, Node*curr){
    pred = curr->left;
    while(pred->right != NULL && pred->right != curr){
        pred = pred->right;
    }
    return pred;
}
void morrisTrev(Node* root){
    Node* curr = root;
    while(curr != NULL){
        // left
        if(curr->left == NULL){
            cout << curr -> data << " ";
            curr = curr->right;
        }else { // right
            Node* pred = predecessor(pred,curr);
            // link Creation
            if(pred -> right == NULL){
                pred->right = curr;
                curr = curr->left;
            }
            // Link removal
            else {
                pred->right = NULL;
                cout << curr -> data << " ";
                curr = curr -> right;
            }
        }
    }
    cout << "\n";
}
int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    
    morrisTrev(root);
    
    
    return 0;
}