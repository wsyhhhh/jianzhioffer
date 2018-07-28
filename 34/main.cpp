#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
vector<vector<int>> res;
vector<int> r;
vector<vector<int>> FindPath(TreeNode* root,int expectNumber) {
    if(root== nullptr||expectNumber==0)
        return res;
    r.push_back(root->val);
    expectNumber-=root->val;
    if(expectNumber==0&&root->left== nullptr&&root->right== nullptr)
        res.push_back(r);
    if(root->left!= nullptr)
        res=FindPath(root->left,expectNumber);
    if(root->right!= nullptr)
        res=FindPath(root->right,expectNumber);
    r.pop_back();
    return res;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}