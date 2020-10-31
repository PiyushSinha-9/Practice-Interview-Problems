class Solution {
public:
    bool helper(TreeNode* root1,TreeNode* root2){
        if(root1==NULL and root2==NULL){
            return true;
        }
        
        if(root1==NULL and root2!=NULL or root1!=NULL and root2==NULL){
            return false;
        }

        if(helper(root1->left,root2->right)  and helper(root1->right,root2->left) and root1->val==root2->val)     
        {
            return true;   
        }else{
            return false;
        }
        
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
};