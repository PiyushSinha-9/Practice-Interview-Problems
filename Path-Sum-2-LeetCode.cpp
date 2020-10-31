class Solution {
public:
    vector<vector<int>> ans;
    
    void print(vector<int> temp){
        for(int i:temp){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    void solver(TreeNode* root, int sum,vector<int> temp={},int temp_sum=0){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL and temp_sum+root->val==sum){
            temp.push_back(root->val);
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(root->val);
        solver(root->left,sum,temp,temp_sum+root->val);
        solver(root->right,sum,temp,temp_sum+root->val);
        temp.pop_back();
        
        return;
    
    
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        solver(root,sum);
        return ans;
    }
};

// Decide at root wheather to keep the path or not wheather tempory sum is zero or temp_sum  
// is eual to requirement
