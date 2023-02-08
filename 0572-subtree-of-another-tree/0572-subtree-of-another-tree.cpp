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
    //r: root
    //s: subRoot
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        return isEqual(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool isEqual(TreeNode* r, TreeNode* s) {
        if (!r && !s) {
            return true;
        }
        else if (!r || !s) {
            return false;
        }

        if (r->val != s->val) {
            return false;
        }
        return isEqual(r->right, s->right) && isEqual(r->left, s->left);
    }
};