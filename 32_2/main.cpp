#include <iostream>
#include <vector>
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
vector<vector<int>> Print(TreeNode* pRoot) {
    vector<vector<int>> res;
    if(pRoot==nullptr)
        return res;
    queue<TreeNode *> q;
    q.push(pRoot);
    int curnode=1;
    int nextnode=0;
    while(!q.empty()){
        vector<int> current;
        while (curnode>0){
            TreeNode* p=q.front();
            q.pop();
            current.push_back(p->val);
            if(p->left!= nullptr){
                q.push(p->left);
                nextnode++;
            }
            if(p->right!= nullptr){
                q.push(p->right);
                nextnode++;
            }
            curnode--;
        }
        res.push_back(current);
        curnode=nextnode;
        nextnode=0;
    }
    return res;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}