#include <iostream>
int Fibonacci(int n) {
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    long long fiba=1;
    long long fibb=0;
    long long fibc=0;
    for(int i=2;i<=n;i++){
        fibc=fiba+fibb;
        fibb=fiba;
        fiba=fibc;
    }
    return fibc;
}
int main() {
    int a=Fibonacci(10);
    std::cout << a << std::endl;
    return 0;
}