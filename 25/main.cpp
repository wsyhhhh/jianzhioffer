#include <iostream>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;

	ListNode(int x) :
			val(x), next(NULL) {
	}
};
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if(pHead1== nullptr)
		return pHead2;
	if(pHead2== nullptr)
		return pHead1;
	ListNode* p1=pHead1;
	ListNode* p2=pHead2;
	ListNode* pnew= nullptr;
	if(p1->val<=p2->val){
		pnew=p1;
		p1=p1->next;
	}
	else{
		pnew=p2;
		p2=p2->next;
	}
	ListNode* pres=pnew;
	while(p1!= nullptr&&p2!= nullptr){
		ListNode* pnext= nullptr;
		if(p1->val<=p2->val){
			pnext=p1;
			p1=p1->next;
		}
		else{
			pnext=p2;
			p2=p2->next;
		}
		pnew->next=pnext;
		pnew=pnext;
	}
	if(p2!= nullptr)
		pnew->next=p2;
	if(p1!= nullptr)
		pnew->next=p1;
	return pres;
}
int main() {
	ListNode* p1=new ListNode(1);
	ListNode* p12=new ListNode(3);
	ListNode* p13=new ListNode(5);
	ListNode* p2=new ListNode(2);
	ListNode* p21=new ListNode(4);
	ListNode* p22=new ListNode(6);
	ListNode* p23=new ListNode(8);
	p1->next=p12;
	p12->next=p13;
	p2->next=p21;
	p21->next=p22;
	p22->next=p23;
	ListNode *p=Merge(p1,p2);
	while(p!= nullptr){
		std::cout << p->val << std::endl;
		p=p->next;
	}
    return 0;
}