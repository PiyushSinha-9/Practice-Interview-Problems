// basic idea to do preorder traversal maintain a path vector
// now once it visit left and right take the path vector and traverse in from behind to get the 
// sum equal to k
// decrease the size of path vector as well


class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        
        int count=0;
        helper(root, sum, count);
        return count;
    }
    
    
    void helper(TreeNode* root, int sum , int &count, vector<int> path={}){
        if(root==NULL) return;
        
        path.push_back(root->val);
        
        helper(root->left,sum, count, path);
        helper(root->right,sum, count, path);
        
        int sizeOfPath=path.size();
        int tempSum=0;
        for(int i= sizeOfPath - 1; i>=0 ;i--){
            tempSum+=path[i];
            if(tempSum == sum){
                count+=1;
            }
        }
        
        path.pop_back();
    }
};