#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()==0||vin.size()==0)
            return NULL;
        TreeNode* root=new TreeNode(pre[0]);
        vector<int> pre_left,pre_right,vin_left,vin_right;
        int index=0;
        for(int i=0;i<vin.size();i++){
            if(vin[i]==pre[0])
                index=i;
        }
        for(int j=0;j<index;j++){
            pre_left.push_back(pre[j+1]);
            vin_left.push_back(vin[j]);
        }
        for(int j=index+1;j<vin.size();j++){
            pre_right.push_back(pre[j]);
            vin_right.push_back(vin[j]);
        }
        root->left=reConstructBinaryTree(pre_left,vin_left);
        root->right=reConstructBinaryTree(pre_right,vin_right);
        return root;
}
int main() {
    vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
    vector<int> in = { 4, 7, 2, 1, 5, 3, 8, 6 };
    TreeNode* root= reConstructBinaryTree(pre, in);
    return 0;
}