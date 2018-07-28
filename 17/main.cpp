#include <iostream>
void Print1tomaxN(int n){
    int max=0;
    int flag=9;
    for(int j=0;j<n;j++){
        max+=flag;
        flag*=10;
    }
    std::cout << max << std::endl;
    for(int i=1;i<=max;i++){
        std::cout << i << std::endl;
    }
}
void printnumber(char* number,int length){
    bool isbeginning0= true;
    for(int i=0;i<length;i++){
        if(isbeginning0&&number[i]!='0'){
            isbeginning0= false;
        }
        if(!isbeginning0)
            std::cout << number[i] ;
    }
    std::cout<<std::endl;
}
void printrecurseively(char* number,int length,int index){
    if(index==length-1){
        printnumber(number,length);
        return;
    }
    for(int i=0;i<10;i++){
        number[index+1]=i+'0';
        printrecurseively(number,length,index+1);
    }

}
void Print1tomaxN_2(int n){
    if(n<=0)
        return;
    char* number=new char[n+1];
    number[n]='\0';
    for(int i=0;i<10;i++){
        number[0]=i+'0';
        printrecurseively(number,n,0);
    }
    delete[] number;
}
int main() {
    Print1tomaxN_2(10);
    return 0;
}