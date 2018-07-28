#include <iostream>
#include <vector>
using namespace std;
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
void reOrderArray(vector<int> &array) {
    int length=array.size();
    int start=0;
    int end=length-1;
    while(start<end){
        if(array[start]&1){
            start++;
        }
        else{
            while(!array[end]&1)
                end--;
            swap(array[start],array[end]);
            end--;
        }
    }
}
bool iseven(int a){
    if(a&1)
        return true;
    return false;
}
void reOrderArray_2(vector<int> &array) {
    int length=array.size();
    int number1=0;
    for(int i=0;i<length;i++){
        if(iseven(array[i]))
            number1++;
    }
    int *b=new int[length];
    int oddbegin=0;
    int oddcount=number1;
    for(int j=0;j<length;j++){
        if(iseven(array[j]))
            b[oddbegin++]=array[j];
        else
            b[oddcount++]=array[j];
    }
    for(int z=0;z<length;z++){
        array[z]=b[z];
    }
}
int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    reOrderArray_2(a);
    vector<int>::iterator iter;
    for(iter=a.begin();iter!=a.end();iter++)
        std::cout << *iter << std::endl;
    return 0;
}