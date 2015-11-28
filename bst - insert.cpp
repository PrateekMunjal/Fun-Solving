node * insert(node * root, int value)
{
   if(root==NULL){
       node *temp = new node;
       temp->data=value;
       temp->left=temp->right=NULL;
       return temp;
   }
    
   if(value>root->data){
        root->right=insert(root->right,value);    
   }
   else{
       root->left=insert(root->left,value);
   } 

   return root;
}

