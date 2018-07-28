#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
vector<vector<int> > Print(TreeNode* pRoot) {
    vector<vector<int>>  res;
    if(pRoot== nullptr)
        return res;
    stack<TreeNode*> odd;
    stack<TreeNode*> even;
    odd.push(pRoot);
    int curnode=1;
    int nextnode=0;
    int isodd=1;
    while(!odd.empty()||!even.empty()){
        vector<int> current;
        while(curnode){
            if(isodd&1){
                TreeNode* p=odd.top();
                odd.pop();
                current.push_back(p->val);
                if(p->left!= nullptr){
                    even.push(p->left);
                    nextnode++;
                }
                if(p->right!= nullptr){
                    even.push(p->right);
                    nextnode++;
                }
            }
            else{
                TreeNode* p=even.top();
                even.pop();
                current.push_back(p->val);
                if(p->right!= nullptr){
                    odd.push(p->right);
                    nextnode++;
                }
                if(p->left!= nullptr){
                    odd.push(p->left);
                    nextnode++;
                }
            }
            curnode--;
        }
        res.push_back(current);
        isodd++;
        curnode=nextnode;
        nextnode=0;
    }
    return res;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}