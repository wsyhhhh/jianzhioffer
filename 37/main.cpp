#include <iostream>
#include <string.h>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
char* Serialize(TreeNode *root) {

    if(root== nullptr)
        return nullptr;
    string s;
    Serialize(root,s);
    int len=s.length();
    char* result=new char[len+1];
    for(int i=0;i<len;i++){
        result[i]=s[i];
    }
    result[len]='\0';
    return result;
}
void Serialize(TreeNode* root,string& s){
    if(root== nullptr){
        s+='$';
        return;
    }
    string r=to_string(root->val);
    s+=r;
    s+=',';
    Serialize(root->left,s);
    Serialize(root->right,s);
}
TreeNode* Deserialize(char *str) {
    if(str== nullptr)
        return nullptr;
    TreeNode* res=Deserialize(&str);
    return res;
}
TreeNode* Deserialize(char** str){
    if(**str=='#'){
        ++(*str);
        return nullptr;
    }
    int num=0;
    while(**str!='\0'&&**str!=','){
        num=num*10+(**str-'0');
        (*str)++;
    }
    TreeNode* root=new TreeNode(num);
    if(**str='\0')
        return root;
    else
        (*str)++;
    root->left=Deserialize(str);
    root->right=Deserialize(str);
    return root;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}