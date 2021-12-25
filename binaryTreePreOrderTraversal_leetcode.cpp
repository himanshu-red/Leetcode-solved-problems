
class Solution
{
public:
    void getElements(TreeNode *root, vector<int> &elements)
    {
        if (root == nullptr)
            return;
        elements.push_back(root->val);
        if (root->left != nullptr)
            getElements(root->left, elements);
        if (root->right != nullptr)
            getElements(root->right, elements);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> elements;
        if (root == nullptr)
            return elements;
        getElements(root, elements);
        return elements;
    }
};