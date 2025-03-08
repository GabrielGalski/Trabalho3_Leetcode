int depth(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    int pLeft = depth(node->left);
    int pRight = depth(node->right);
    return (pLeft > pRight ? pLeft : pRight) + 1;
}

struct TreeNode* subtreeWithAllDeepest(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }
    int pLeft = depth(root->left);
    int pRight = depth(root->right);

    if (pLeft == pRight) {
        return root;
    }
    else if (pLeft > pRight) {
        return subtreeWithAllDeepest(root->left);
    } else {
        return subtreeWithAllDeepest(root->right);
    }
}

    
