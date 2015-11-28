void Postorder(node *root) {
    stack<node*> s;
    for(;;){
        if(root){
            s.push(root);
            root=root->left;
        }
        else{
            if(s.empty()){
                return;
            }
            else{
                if(s.top()->right==NULL){
                    root=s.top();
                    s.pop();
                    cout<<root->data<<" ";
                    if(root==s.top()->right){
                        cout<<s.top()->data<<" ";
                        s.pop();
                    }
                }
            }
            if(!s.empty()){
                    root=s.top()->right;
                }
            else{
                    root=NULL;
                }
            }
        }
    }
