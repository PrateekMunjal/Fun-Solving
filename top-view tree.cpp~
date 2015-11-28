/* Recursive

void traverse_left(node *root){
    if(root){
        traverse_left(root->left);
        cout<<root->data<<" ";
    }
}

void traverse_right(node *root){
    if(root){
        cout<<root->data<<" ";
        traverse_right(root->right);
    }
}

void top_view(node * root)
{
 
    traverse_left(root);
    traverse_right(root->right);
}


*/

#include<stack>
#include<queue>

void top_view(node * root)
{
 
    node* temp=root;
    stack<node*> s;
    queue<node*> q;
    while(temp){
        s.push(temp);
        temp=temp->left;
    }
    while(!s.empty()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
    root=root->right;
    if(root){
        while(root){
            q.push(root);
            //cout<<"I worked";
            root=root->right;
        }
        while(!q.empty()){
            cout<<q.front()->data<<" ";
            q.pop();
        }
    }
}

