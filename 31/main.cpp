#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool IsPopOrder(vector<int> pushV,vector<int> popV) {
    int index_push=0;
    int index_pop=0;
    bool ispop= true;
    int len_push=pushV.size();
    int len_pop=popV.size();
    if(len_pop==0)
        return true;
    if(len_push==0)
        return false;
    stack<int> st;
    while(ispop&&index_pop<len_pop){
        if(st.empty()){
            st.push(pushV[index_push]);
            index_push++;
        }
        while(st.top()!=popV[index_pop]&&index_push<len_push){
            st.push(pushV[index_push]);
            index_push++;
        }
        if(st.top()==popV[index_pop]){
            st.pop();
            index_pop++;
        }
        else
            ispop=false;
    }
    return ispop;
}
int main() {
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    b.push_back(4);
    b.push_back(3);
    b.push_back(1);
    b.push_back(2);
    b.push_back(5);
    std::cout << IsPopOrder(a,b) << std::endl;
    return 0;
}