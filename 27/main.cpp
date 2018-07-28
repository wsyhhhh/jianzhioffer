#include <iostream>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

void Mirror(TreeNode *pRoot) {
    if(pRoot== nullptr)
        return;
    if(pRoot->left== nullptr&&pRoot->right== nullptr)
        return;
    TreeNode *temp=pRoot->right;
    pRoot->right=pRoot->left;
    pRoot->left=temp;
    if(pRoot->left!= nullptr)
        Mirror(pRoot->left);
    if(pRoot->right!= nullptr)
        Mirror(pRoot->right);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}