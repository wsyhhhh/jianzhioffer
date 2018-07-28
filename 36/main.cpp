#include <iostream>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
TreeNode* Convert(TreeNode* pRootOfTree) {
    if(pRootOfTree== nullptr)
        return nullptr;
    if(pRootOfTree->left== nullptr&&pRootOfTree->right== nullptr)
        return pRootOfTree;

    TreeNode* left_head=Convert(pRootOfTree->left);
    TreeNode* p=left_head;
    while(p!= nullptr&&p->right!= nullptr)
        p=p->right;
    if(left_head!= nullptr){
        pRootOfTree->left=p;
        p->right=pRootOfTree;
    }
    TreeNode* right_head=Convert(pRootOfTree->right);
    if(right_head!= nullptr){
        right_head->left=pRootOfTree;
        pRootOfTree->right=right_head;
    }
    if(left_head!= nullptr)
        return left_head;
    else
        return pRootOfTree;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}