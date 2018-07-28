#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
void PermutationCore(vector<string> &result,string str,int index){
    if(index==str.length()-1){
        result.push_back(str);
    }
    else{
        for(int i=index;i<str.length();i++){
            if(i!=index&&str[i]==str[index])
                continue;
            swap(str[i],str[index]);
            PermutationCore(result,str,index+1);
            swap(str[i],str[index]);
        }
    }
}
vector<string> Permutation(string str) {
    vector<string> result;
    if(str.empty())
        return  result;
    PermutationCore(result,str,0);
    sort(result.begin(),result.end());
    return result;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}