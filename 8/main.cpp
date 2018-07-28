#include <iostream>
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {}
};
TreeLinkNode* GetNext(TreeLinkNode* pNode)
{
    if(pNode== nullptr)
        return nullptr;
    TreeLinkNode* pNext= nullptr;
    if(pNode->right!= nullptr){
        TreeLinkNode* p=pNode->right;
        while (p->left!= nullptr)
            p=p->left;
        pNext=p;
    } else if(pNode->next!= nullptr){
        TreeLinkNode* pcurrent=pNode;
        TreeLinkNode* parent=pNode->next;
        while(parent!= nullptr&&pcurrent==parent->right){
            pcurrent=parent;
            parent=pcurrent->next;
        }
        pNext=parent;
    }
    return pNext;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}