// Not Optimised 
// tc - > O(N^2)
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

// Optimised
// tc - > O(N)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    pair<int,bool> solve(TreeNode* &root){
        if(root == NULL) {
            return make_pair(0,1);
        }
        pair<int,bool> leftA = solve(root->left);
        pair<int,bool> rightA= solve(root->right);
        bool diff = abs(leftA.first-rightA.first) <= 1;

        if(leftA.second && rightA.second && diff ){
            int hgt = max(leftA.first,rightA.first) +1;
            return make_pair(hgt,true);
        }else {
            int hgt = max(leftA.first,rightA.first) +1;
            return make_pair(hgt,false);
        }

    }
    bool isBalanced(TreeNode* root) {
        return solve(root).second;
    }
};