#include <iostream>
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

ListNode* EntryNodeOfLoop(ListNode* pHead){
    if(pHead== nullptr)
        return nullptr;
    ListNode* pfast=pHead;
    ListNode* pslow=pHead;
    bool hascircle= false;
    if(pslow->next== nullptr)
        return nullptr;
    while(pfast!= nullptr&&pslow!= nullptr&&!hascircle){
        pfast=pfast->next;
        if(pfast->next!= nullptr)
            pfast=pfast->next;
        pslow=pslow->next;
        if(pfast==pslow){
            hascircle = true;
       }
    }
    if(!hascircle)
        return nullptr;
    int circlenumber=1;
    while(pfast->next!=pslow){
        pfast=pfast->next;
        circlenumber++;
    }
    ListNode* pfirst=pHead;
    ListNode* psecond=pHead;
    for(int i=0;i<circlenumber;i++)
        pfirst=pfirst->next;
    while(pfirst!=psecond){
        pfirst=pfirst->next;
        psecond=psecond->next;
    }
    return pfirst;
}
int main() {
    ListNode* p=new ListNode(1);
    //ListNode* p2=new ListNode(2);
    //ListNode* p3=new ListNode(3);
    //ListNode* p4=new ListNode(4);
    //ListNode* p5=new ListNode(5);
    //ListNode* p6=new ListNode(6);
    //p->next=p;
    //p2->next=p3;
    //p3->next=p4;
    //p4->next=p5;
    //p5->next=p6;
    //p6->next=p3;
    ListNode* res=EntryNodeOfLoop(p);
    if(res!= nullptr)
        std::cout << res->val << std::endl;
    else
        std::cout << -1 << std::endl;
    return 0;
}