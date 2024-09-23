int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int maxW = 0;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int size = q.size();
            unsigned long long left = q.front().second;
            unsigned long long right = q.back().second;
            maxW = max(maxW, int(right - left + 1));
            for (int i = 0; i < size; i++) {
                auto [curr, idx] = q.front();
                q.pop();
                if (curr->left != nullptr) {
                    q.push({curr->left, 2 * idx + 1});
                }
                if (curr->right != nullptr) {
                    q.push({curr->right, 2 * idx + 2});
                }
            }
        }
        return maxW;
    }