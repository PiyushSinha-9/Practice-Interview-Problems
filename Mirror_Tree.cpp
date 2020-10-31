int areMirror(Node* a, Node* b) {
    // Your code here
    
    if(a==NULL and b==NULL ) return 1;
    
    if(a==NULL or b==NULL) return 0;
    
    return (a->data==b->data and areMirror(a->left,b->right) and areMirror(a->right,b->left));   
}