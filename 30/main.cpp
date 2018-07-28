#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    void push(int value) {
        st.push(value);
        if(min_st.size()==0||value<min_st.top())
            min_st.push(value);
        else{
            int re=min_st.top();
            min_st.push(re);
        }
    }
    void pop() {
        if(!st.empty()&&!min_st.empty()){
            st.pop();
            min_st.pop();
        }
    }
    int top() {
        return st.top();
    }
    int min() {
        return min_st.top();
    }
private:
    stack<int> st;
    stack<int> min_st;
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}