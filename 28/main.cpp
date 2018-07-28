#include <iostream>
#include <vector>
using  namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
bool isSymmetricalCore(TreeNode* l,TreeNode* r){
    if(l== nullptr)
        return r== nullptr;
    if(r== nullptr)
        return false;
    if(l->val!=r->val)
        return false;
    return isSymmetricalCore(l->left,r->right)&&isSymmetricalCore(l->right,r->left);
}
bool isSymmetrical(TreeNode* pRoot)
{
    if(pRoot== nullptr)
        return true;
    return isSymmetricalCore(pRoot->left,pRoot->right);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}