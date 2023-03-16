/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* r, TreeNode* s) {
        if (!r) return false;
        return identicalTrees(r, s) || isSubtree(r->left, s) || isSubtree(r->right, s);
    }
    
    bool identicalTrees(TreeNode* r, TreeNode* s) {
        if (!r && !s) return true;
        else if (!r || !s) return false;
        
        if (r->val == s->val) return identicalTrees(r->left, s->left) && identicalTrees(r->right, s->right);
        else return false;
    }
};