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

void levelOrder(Node* node){
    queue<Node*> q;
    q.push(node);
    q.push(NULL);
    int cnt = 0;
    while(!q.empty()){
        Node *newNode = q.front();
        q.pop();

        if(newNode == NULL){
            cnt++;
            if(!q.empty()){ // still elsement present
                q.push(NULL);
            }
        }else {
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);

        }
    }

    cout << cnt-1 << endl;
}

int recursive(Node* node){
    if((node == NULL))
        return 0;
    /*for Zero level indexed
    if((node->left == NULL &&node->right == NULL ))
        return 0;
    */ 
    int a = recursive(node->left);
    int b = recursive(node->right);
    
    return max(a,b) + 1;

}
int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // 10 3 5 -1 -1 7 1 -1 -1 -1 11 -1 -1
    // 10 9 7 3 -1 -1 2 -1 -1 6 3 6 7 -1 -1 -1 8 5 2 -1 -1 -1 4 1 -1 -1 -1
    // Node* node =  buildTree();
    Node* node = NULL;
    node = buildTree();
    cout<<"Level - Order " <<endl;
    // levelOrder(node);
    cout << recursive(node);
    return 0;
}