#include <iostream>
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
RandomListNode* Clone(RandomListNode* pHead)
{
    if(pHead== nullptr)
        return nullptr;
    RandomListNode* p=pHead;
    while(p!= nullptr){
        RandomListNode* pnext=p->next;
        RandomListNode* pclone=new RandomListNode(p->label);
        p->next=pclone;
        pclone->next=pnext;
        p=pnext;
    }
    RandomListNode* ps=pHead;
    RandomListNode* pc=pHead->next;
    while(ps!= nullptr){
        if(ps->random!= nullptr)
            pc->random=ps->random->next;
        ps=ps->next->next;
        pc=pc->next->next;
    }
    RandomListNode* pclonehead=pHead->next;
    RandomListNode* pclonenode= pclonehead;
    RandomListNode* pNode=pHead;
    while(pNode!= nullptr){
        pNode->next=pclonenode->next;
        pNode=pNode->next;
        if(pNode!= nullptr){
            pclonenode->next=pNode->next;
            pclonenode=pclonenode->next;
        }
    }
    return pclonehead;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}