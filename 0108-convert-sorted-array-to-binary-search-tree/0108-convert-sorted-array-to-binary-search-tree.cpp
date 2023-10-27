class Solution {
public:
    TreeNode* build(int start, int end, vector<int>& nums) {
        if (start > end)
            return NULL;
        int ind = (start + end) / 2;
        TreeNode* root = new TreeNode(nums[ind]);
        root->left = build(start, ind-1, nums);
        root->right = build(ind+1, end, nums);

        return root;    
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(0, nums.size() - 1, nums);
    }
};