const int INF= 1e9 + 7;


bool check(Node *root, int LTree, int RTree){
    
    if(root==NULL) return true;
    
    
    if(root->data <= LTree or root->data >= RTree){
        return false;
    }
    
    return check(root->left, LTree, root->data) and check(root->right, root->data, RTree);
    
    
}



bool isBST(Node* root) {
    // Your code here
    
    if(root == NULL ){
        return true;
    }
    
    
    return check(root, -INF, INF);
    
}
