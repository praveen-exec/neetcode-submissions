
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both trees are empty
        if(p == nullptr && q == nullptr)
            return true;

        // Only one tree is empty
        if(p == nullptr || q == nullptr)
            return false;

        // Compare root values
        if(p->val != q->val)
            return false;

        
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
