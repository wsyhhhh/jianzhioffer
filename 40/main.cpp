#include <iostream>
#include <vector>
#include <set>

using namespace std;
int Partation(vector<int> &input,int len,int start,int end){
    if(input.empty()||len<=0||start<0||end>=len)
        throw new exception;
    int small=start;
    int index=input[end];
    for(int i=start;i<end;i++){
        if(index>input[i]){
            swap(input[small],input[i]);
            small++;
        }
    }
    swap(input[small],input[end]);
    return small;
}
vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
    vector<int> result;
    if(input.empty()||k<=0||k>input.size())
        return result;
    int len=input.size();
    int start=0;
    int end=len-1;
    int index=Partation(input,len,start,end);
    while(index!=(k-1)){
        if(index<(k-1)){
            start=index+1;
            index=Partation(input,len,start,end);
        }
        else{
            end=index-1;
            index=Partation(input,len,start,end);
        }
    }
    for(int i=0;i<k;i++){
        result.push_back(input[i]);
    }
    return result;
}
typedef multiset<int,greater<int>> inset;//big endian heap
typedef multiset<int,greater<int>>::iterator setiterator;
void getleast(vector<int>& input,inset& leastnumbers,int k){
    leastnumbers.clear();
    if(k<1||input.size()<k)
        return;
    vector<int>::const_iterator iter=input.begin();
    for(;iter!=input.end();iter++){
        if(leastnumbers.size()<k)
            leastnumbers.insert(*iter);
        else{
            setiterator least=leastnumbers.begin();
            if(*iter<*least){
                leastnumbers.erase(*least);
                leastnumbers.insert(*iter);
            }
        }
    }

}
vector<int> GetLeastNumbers_Solution_1(vector<int> input, int k) {
    inset leastnumbers;
    vector<int> result;
    getleast(input,leastnumbers,k);
    setiterator lt=leastnumbers.begin();
    for(lt;lt!=leastnumbers.end();lt++)
        result.push_back(*lt);
    return result;
}
int main() {
    vector<int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    a.push_back(6);
    a.push_back(2);
    a.push_back(7);
    a.push_back(3);
    a.push_back(8);
    vector<int> res=GetLeastNumbers_Solution_1(a,8);
    for(int i=0;i<res.size();i++)
        std::cout << res[i] << std::endl;
    return 0;
}