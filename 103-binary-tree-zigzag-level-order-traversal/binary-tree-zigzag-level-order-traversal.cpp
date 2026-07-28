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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        stack<int> s;
        q.push(root);
        int c = 1;
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->right!=NULL) q.push(node->right);
                if(node->left!=NULL) q.push(node->left);
                if(c%2==0) level.push_back(node->val);
                else s.push(node->val);
            }
            if(c%2==0) ans.push_back(level);
            else{
                while(!s.empty()){
                    level.push_back(s.top());
                    s.pop();
                }
                ans.push_back(level);
            }
            c++;
        }
        return ans;
    }
};