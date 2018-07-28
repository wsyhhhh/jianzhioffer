#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    if(pListHead== nullptr)
        return nullptr;
    ListNode* pfirst=pListHead;
    ListNode* psecond=pListHead;
    if(k>1){
        for(int i=0;i<k-1;i++){
            if(pfirst->next!= nullptr)
                pfirst=pfirst->next;
            else
                return nullptr;
        }
    }
    else if(k==0)
        return nullptr;
    while(pfirst->next!= nullptr){
        pfirst=pfirst->next;
        psecond=psecond->next;
    }
    return psecond;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}