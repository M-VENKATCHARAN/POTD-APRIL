class Solution {
public:

    unordered_map<int,int>mp;
    int maxi=0;

    void depth(TreeNode* root,int x){
        if(root==NULL)return;
        mp[root->val]=x;
        maxi=max(maxi,x);
        depth(root->left,x+1);
        depth(root->right,x+1);
    }

    TreeNode* lca(TreeNode* root){
        if(root==NULL||mp[root->val]==maxi)
            return root;
        
        TreeNode* l=lca(root->left);
        TreeNode* r=lca(root->right);

        if(l && r)return root;

        return (l!=NULL?l:(r!=NULL?r:NULL));

    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        depth(root,0);

        return lca(root);
    }
};
