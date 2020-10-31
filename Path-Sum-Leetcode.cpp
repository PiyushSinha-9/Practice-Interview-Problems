class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root==NULL ) return false;
        
        sum-=root->val;
        
        if(root->left==NULL and root->right==NULL and sum==0){
            return true;
        }
        
        if(hasPathSum(root->left,sum) or hasPathSum(root->right,sum)){
            return true;
        }else{
            return false;
        }
        
    }
};


/// [] -> false
/// sum can also be in negative