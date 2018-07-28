#include <iostream>

using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    int res=0;
    for(int i=l;i<=r;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            int temp=j;
            while(j>9){
                sum+=j%10;
                j=j/10;
            }
            sum+=j;
            j=temp;
        }
        if(sum%3==0)
            res++;
    }
    cout<<res;
    return 0;
}
