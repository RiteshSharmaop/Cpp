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

// N L R
void preOrder(Node* &root){
    if(root == NULL) return;
    // N
    cout << root->data << " ";
    // R
    preOrder(root->left);
    // R
    preOrder(root->right);
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

// L R N
void PostOrder(Node* &root){
    if(root == NULL) return;

    // L
    PostOrder(root->left);
    // R
    PostOrder(root->right);
    // N
    cout << root->data << " ";
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
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    cout<<endl;
    cout<<"Pre - Order " <<endl;
    preOrder(root);
    cout<<endl;
    cout<<"In - Order " <<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Post - Order " <<endl;
    PostOrder(root);
    cout <<endl;
    cout<<"Level - Order " <<endl;
    levelOrder(root);

    
    
    return 0;
}