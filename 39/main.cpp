#include <iostream>
#include <vector>
using namespace std;
int Partation(vector<int> numbers,int len,int start,int end){
    if(numbers.empty()||len<=0||start<0||end>=len)
        throw new exception;
    int index=numbers[end];
    int small=start;
    for(int i=start;i<end;i++){
        if(index>numbers[i]){
            swap(numbers[small],numbers[i]);
            small++;
        }
    }
    swap(numbers[end],numbers[small]);
    return small;
}
int MoreThanHalfNum_Solution(vector<int> numbers) {
    if(numbers.empty())
        return 0;
    int len=numbers.size();
    int middle=len>>1;
    int start=0;
    int end=len-1;
    int index=Partation(numbers,len,start,end);
    while(index!=middle){
        if(index<middle){
            start=index+1;
            index=Partation(numbers,len,start,end);
        }
        else {
            end = index - 1;
            index = Partation(numbers, len, start, end);
        }
    }
    int result=numbers[index];
    int count=0;
    for(int i=0;i<len;i++){
        if(numbers[i]==result)
            count++;
    }
    if((count<<1)>len)
        return result;
    else
        return 0;
}
int MoreThanHalfNum_Solution_1(vector<int> numbers) {
    if(numbers.empty())
        return 0;
    int result=numbers[0];
    int times=1;
    for(int i=1;i<numbers.size();i++){
        if(times==0){
            result=numbers[i];
            times=1;
        }
        else if(result==numbers[i])
            times++;
        else
            times--;
    }
    int count=0;
    for(int j=0;j<numbers.size();j++){
        if(numbers[j]==result)
            count++;
    }
    if((count<<1)<numbers.size())
        result=0;
    return result;
}
int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(2);
    std::cout << MoreThanHalfNum_Solution_1(a) << std::endl;
    return 0;
}