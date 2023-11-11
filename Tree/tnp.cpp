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

int treee(Node* node){
    if((node == NULL))
        return 0;
    int a = treee(node->left);
    int b = treee(node->right);

    if(abs(a-b) <= 1){

    }
    return max(a,b) + 1;
}
bool isBalanced(Node* root) {
        if(root == NULL) return true;

        bool left = isBal(root->left);
        bool right = isBal(root->right);

        if(a(left-right))
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
    cout << treee(node);
    return 0;
}

class Solution {
public:
    int hgt(TreeNode* root){
        if(root == NULL)
            return 0;
        
        
        return max(hgt(root->left),hgt(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(hgt(root->left)-hgt(root->right)) <= 1;

        if(left && right && diff){
            return true;
        }
        return false;
    }
};