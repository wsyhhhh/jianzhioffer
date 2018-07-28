#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty()){
            while(!stack1.empty()){
                int a=stack1.top();
                stack1.pop();
                stack2.push(a);
            }
            int b=stack2.top();
            stack2.pop();
            return b;
        }
        else{
            int c=stack2.top();
            stack2.pop();
            return c;
        }
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};