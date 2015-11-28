int height(node * root)
{
 
    int lh,rh;
    if(root==NULL){
        return 0;
    }
    
    lh=height(root->left);
    rh=height(root->right);
    
    if(lh>rh) return lh+1;
    
    return rh+1;
}
