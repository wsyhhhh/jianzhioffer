#include <iostream>
#include <vector>
using namespace std;
bool VerifySquenceOfBST(vector<int> sequence) {
    if(sequence.empty())
        return false;
    int length=sequence.size();
    if(length==1)
        return true;
    int root=sequence[length-1];
    vector<int> left;
    vector<int> right;
    int i=0;
    while(sequence[i]<root){
        left.push_back(sequence[i]);
        i++;
    }
    while(sequence[i]>root){
        right.push_back(sequence[i]);
        i++;
    }
    if(i!=length-1)
        return false;
    bool leftisBST=true;
    if(!left.empty())
        leftisBST=VerifySquenceOfBST(left);
    bool rightisBST=true;
    if(!right.empty())
        rightisBST=VerifySquenceOfBST(right);
    return leftisBST&&rightisBST;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}