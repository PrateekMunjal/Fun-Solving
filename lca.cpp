#include<stack>
#include<queue>

void search(node* root,int value,stack<node*> s){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        if(root->data==value){
            break;
        }
        s.push(root);
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
        q.pop();
    }
}

node * lca(node * root, int v1,int v2)
{
    if(!root){
        return root;
    }
    if(root->data==v1 || root->data ==v2)
    {
        return root;
    }   
    stack<node*> s1,s2;
    search(root,v1,s1);
    search(root,v2,s2);
    while(!s1.empty() && !s2.empty()){
        if(s1.top()==s2.top()){
            return s1.top();
        }
        s1.pop();
        s2.pop();
    }
    return root;
}

/* second approach 

node * lca(node * root, int v1,int v2)
{
    if(!root){
        return root;
    }
    
    if(root->data==v1||root->data==v2){
        return root;
    }
    
    node *left=lca(root->left,v1,v2);
    node *right=lca(root->right,v1,v2);
    
    if(left && right){
        return root;
    }
    
    if(left){
        return left;
    }
    else{
        return right;
    }
    
}

*/



