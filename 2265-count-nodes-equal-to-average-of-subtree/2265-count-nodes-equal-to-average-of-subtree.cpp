class Solution {
public:

    // returns {sum, size}
    pair<int, int> solve(TreeNode* root, int &ans) {

        if (root == NULL)
            return {0, 0};

        // Get sum and size of left subtree
        pair<int, int> left = solve(root->left, ans);

        // Get sum and size of right subtree
        pair<int, int> right = solve(root->right, ans);

        // Sum of current subtree
        int sum = root->val + left.first + right.first;

        // Size of current subtree
        int size = 1 + left.second + right.second;

        // Average of current subtree
        int avg = sum / size;

        // Check if current node equals average
        if (avg == root->val)
            ans++;

        return {sum, size};
    }

    int averageOfSubtree(TreeNode* root) {

        int ans = 0;

        solve(root, ans);

        return ans;
    }
};