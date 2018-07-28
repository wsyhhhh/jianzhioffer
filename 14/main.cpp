#include <iostream>
int maxcut(int length){
    if(length<2)
        return 0;
    if(length==2)
        return 1;
    if(length==3)
        return 2;
    int* mc=new int[length+1];
    mc[0]=0;
    mc[1]=1;
    mc[2]=2;
    mc[3]=3;
    int max=0;
    for(int i=4;i<=length;i++){
        max=0;
        for(int j=1;j<=i/2;j++){
            if(mc[i-j]*mc[j]>max)
                max=mc[i-j]*mc[j];
        }
        mc[i]=max;
    }
    return mc[length];
}
int main() {
    std::cout << maxcut(8) << std::endl;
    return 0;
}