void Preorder(node *root) {
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

/* Iterative Version */
void Preorder(node *root) {
    stack<node*> s;
    for(;;){
        while(root){
            cout<<root->data<<" ";
            s.push(root);
            root=root->left;
        }
        if(s.empty()){
            break;
        }
        root=s.top();
        s.pop();
        root=root->right;
    }

}
