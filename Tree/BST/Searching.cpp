#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int d){
        this->data = d;
        left= right = NULL;
    }
};


Node* makeBST(Node* root , int data){
    if(root == NULL) {
        // return new Node(data);
        Node* temp = new Node(data);
        return temp;
    }

    if(data > root->data){
        root -> right = makeBST(root->right,data); 
    }else 
        root -> left = makeBST(root->left,data);
    
    return root;
}

void creatBST(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = makeBST(root, data);
        cin >> data;
    }
}

bool search(Node* root , int target) {
    if(root == NULL) return false;

    if(root -> data == target) return true;
    else if(root -> data > target) search(root -> left , target);
    else search(root -> right , target);
}
int main() {

    Node* root = NULL;
    creatBST(root);

    int target ;
    cin >> target;
    if(search(root,target)) cout << "YES" <<endl;
    else cout << "NO" << endl;
    return 0;
}