
void helper(struct Node *root, int k,vector<int> &ans,int depth=0){
    if(root==NULL) return;
    
    if(depth==k){
        ans.push_back(root->data);
    }
    
    helper(root->left,k,ans,depth+1);
    helper(root->right,k,ans,depth+1);
    
    return;    
    
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  
  vector<int> ans;
  helper(root,k,ans);
  return ans;
  
}