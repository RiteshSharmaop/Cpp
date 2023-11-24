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


void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *newNode = q.front();
        q.pop();

        if(newNode == NULL){
            cout << endl;
            // check 
            if(!q.empty()){ // still elsement present
                q.push(NULL);
            }
        }else {
            cout << newNode->data << " ";
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);

        }
    }
}

int main() {

    Node* root = NULL;
    creatBST(root);

    levelOrder(root);
    return 0;
}