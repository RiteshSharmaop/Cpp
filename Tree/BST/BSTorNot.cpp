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
bool BstOrNot(Node* root){
    /***    NOT WORKING      ***/
    // my appROACH erroR  
    /*
            5
        4       6
    x      x '3'     7
    */
    if(root == NULL){
        return true;
    }
    //  left null right null -> return true
    if(root->left == NULL && root -> right == NULL){
        return BstOrNot(root->left);
    }
    // left null right hoga  -> right check and call right
    if(root -> left == NULL && root-> right != NULL){
        if(root->data < root->right-> data){
            return BstOrNot(root->right);
        }else return false;
    }
    // left hoga right null hoga -> left check and call left
    if(root -> left != NULL && root-> right == NULL){
        if(root->data > root->left -> data){
            return BstOrNot(root->left);
        }else return false;
    }
    // left hoga right hoga -> left right check and call left
    if(root->left->data < root->data && root->right->data > root->data ){
        return BstOrNot(root->left);
    }
    return root;
}

bool checkBST(Node* root,long long init , long long end){
    if(root == NULL) return true;
    if(root->data > init && root->data < end) {
        bool left = checkBST(root->left,init,root->data);
        bool right = checkBST(root->right,root->data,end);
        return left && right;
    }
    return false;
    
}
bool isValidBST(Node* root) {

    return checkBST(root,-1e10+1,1e10);
}
int main() {

    Node* root = NULL;
    creatBST(root);

    cout << isValidBST(root);
    return 0;
}