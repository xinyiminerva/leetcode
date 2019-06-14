class leetcode700{
    public:
    TreeNode* searchBST(TreeNode* root, int val) {
    while (root != nullptr && root->val != val) {
      root = (root->val > val) ? root->left : root->right;
    }
    return root;
}
}
/**
 *a little bit faster
 *  TreeNode* searchBST(TreeNode* root, int val) {
        while ((root)&&(root->val != val)) root = (val < root->val) ? root->left : root->right;
        return root;
    }
**/