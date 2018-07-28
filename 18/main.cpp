#include <iostream>
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
void DeleteNode(ListNode* phead,ListNode* tobedeleted){
    if(phead== nullptr||tobedeleted== nullptr)
        return;
    while(phead->next!= tobedeleted){
        phead=phead->next;
    }
    ListNode* pnext=tobedeleted->next;
    phead->next=pnext;
    delete tobedeleted;
}
void DeleteNode_2(ListNode* phead,ListNode* tobedeleted){
    if(phead== nullptr||tobedeleted== nullptr)
        return;
    if(tobedeleted->next!= nullptr){
        ListNode* realdelete=tobedeleted->next;
        tobedeleted->val=realdelete->val;
        tobedeleted->next=realdelete->next;
        delete realdelete;
        realdelete= nullptr;
    }
    else if(phead==tobedeleted){
        delete tobedeleted;
        tobedeleted= nullptr;
        phead= nullptr;
    }
    else{
        while(phead->next!=tobedeleted)
            phead=phead->next;
        phead->next= nullptr;
        delete tobedeleted;
        tobedeleted= nullptr;
    }
}
ListNode* deleteDuplication(ListNode* pHead)
{
    if(pHead== nullptr)
        return nullptr;
    ListNode* pre= nullptr;
    ListNode* p=pHead;
    while(p!= nullptr){
        ListNode* pnext=p->next;
        bool needtodelete= false;
        if(pnext!= nullptr&&p->val==pnext->val)
            needtodelete=true;
        if(needtodelete){
            int value=p->val;
            ListNode* ptodel=p;
            while(ptodel!= nullptr&&ptodel->val==value){
                pnext=ptodel->next;
                delete ptodel;
                ptodel= nullptr;
                ptodel= pnext;
            }
            if(pre == nullptr)
                pHead=pnext;
            else
                pre->next=pnext;
            p=pnext;
        }
        else{
            pre=p;
            p=p->next;
        }
    }
    return pHead;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}