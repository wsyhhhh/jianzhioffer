#include <iostream>
int  NumberOf1(int n) {
    int count=0;
    while(n) {
        if (n&1)
            count++;
        n=n>>1;
    }
    return count;
}
int NumberOf1_2(int n){
    int count=0;
    unsigned  int flag=1;
    while(flag){
        if(n&flag)
            count++;
        flag=flag<<1;
    }
    return count;
}
int NumberOf1_3(int n){
    int count=0;
    while(n){
        count++;
        n=(n-1)&n;
    }
    return count;
}
int main() {
    std::cout << NumberOf1(0xFFFFFFFF) << std::endl;
    std::cout << (0x80000000) << std::endl;
    std::cout << (0x7fffffff) << std::endl;
    return 0;
}