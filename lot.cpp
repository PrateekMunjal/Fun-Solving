#include<queue>

void LevelOrder(node * root)
{
    if(root){    
        queue<node*> q;
        q.push(root);
        while(!q.empty()){
            if(root->left){
                q.push(root->left);
            }
            if(root->right){
                q.push(root->right);
            }
            cout<<q.front()->data<<" ";
            q.pop();
            root=q.front();
        }
    }
}

