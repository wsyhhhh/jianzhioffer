#include <iostream>
using namespace std;
bool matchcore(char* str,char* pattern){
    if(*str=='\0'&&*pattern=='\0')
        return true;
    if(*str!='\0'&&*pattern=='\0')
        return false;
    if(*(pattern+1)=='*'){
        if(*pattern==*str||(*pattern=='.'&&*str!='\0'))
            return matchcore(str+1,pattern)||matchcore(str+1,pattern+2)||matchcore(str,pattern+2);
        else
            return matchcore(str,pattern+2);
    }
    if(*pattern==*str||(*pattern=='.'&&*str!='\0'))
        return matchcore(str+1,pattern+1);
    return false;
}
bool match(char* str, char* pattern)
{
    if(str== nullptr||pattern== nullptr)
        return  false;
    return matchcore(str,pattern);
}
int main() {
    char str[5]="aaab";
    char pattern[8]="ab*ac*a";
    std::cout << match(str,pattern) << std::endl;
    return 0;
}