/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool ans;

int dfs(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    int l = dfs(node->left);
    int r = dfs(node->right);
    if (l - r > 1 || r - l > 1) {
        ans = false;
    }
    return 1 + (l > r ? l : r);
}

bool isBalanced(struct TreeNode* root) {
    ans = true;
    dfs(root);
    return ans;
}
