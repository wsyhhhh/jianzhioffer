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
vector<int> PrintFromTopToBottom(TreeNode* root) {
    vector<int> result;
    queue<TreeNode*> q;
    if(root== nullptr)
        return result;
    q.push(root);
    while(!q.empty()){
        TreeNode* p=q.front();
        q.pop();
        result.push_back(p->val);
        if(p->left!= nullptr)
            q.push(p->left);
        if(p->right!= nullptr)
            q.push(p->right);
    }
    return result;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}