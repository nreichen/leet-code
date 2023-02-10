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
        return isEqual(r, s) || isSubtree(r->left, s) || isSubtree(r->right, s);
    }
    
    bool isEqual(TreeNode* r, TreeNode* s) {
        if (!r && !s) return true;
        else if (!r || !s) return false;
        
        if (r->val != s->val) {
            return false;
        }
        else {
            return isEqual(r->right, s->right) && isEqual(r->left, s->left);
        }
    }
};