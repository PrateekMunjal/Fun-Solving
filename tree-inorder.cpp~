void Inorder(node *root) {
    
    stack<node*> s;
    if(!root)return;
    for(;;)
    {
        while(root)
        {
            s.push(root);
            root=root->left;
        }    
        if(s.empty())
        {
            break;    
        }
        root=s.top();
        cout<<s.top()->data<<" ";
        s.pop();
        root=root->right;
    }
    
}

