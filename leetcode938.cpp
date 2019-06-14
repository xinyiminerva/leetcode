using namespace std;
 class leetcode938{
  public:
   int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL) {
            return 0;
        }
        
        if (root->val < L) {
            return rangeSumBST(root->right, L, R);
        }
        
        if (root->val > R) {
            return rangeSumBST(root->left, L, R);
        }
        
        return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};