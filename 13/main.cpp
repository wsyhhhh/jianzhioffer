#include <iostream>
#include <cstring>
using namespace std;
int sumcheck(int num){
    int sum=0;
    while (num>0){
        sum+=num%10;
        num=num/10;
    }
    return sum;
}
bool check(int threshold,int rows,int cols,int row,int col,bool* visited){
    bool res=false;
    if(row>=0&&row<rows&&col>=0&&col<cols&&!visited[row*cols+col]&&(sumcheck(row)+sumcheck(col))<=threshold){
        res=true;
    }
    return res;
}
int movingCountCore(int threshold,int rows,int cols,int row,int col,bool* visited){
    int count=0;
    if(check(threshold,rows,cols,row,col,visited)){
        visited[row*cols+col]= true;
        count=1+movingCountCore(threshold,rows,cols,row-1,col,visited)+
                movingCountCore(threshold,rows,cols,row+1,col,visited)+
                movingCountCore(threshold,rows,cols,row,col-1,visited)+
                movingCountCore(threshold,rows,cols,row,col+1,visited);

    }
    return count;
}
int movingCount(int threshold, int rows, int cols)
{
    if(threshold<=0||rows<1||cols<1)
        return 0;
    bool* visited=new bool[rows*cols];
    memset(visited,0,rows*cols);
    int count=movingCountCore(threshold,rows,cols,0,0,visited);
    delete[](visited);
    return count;
}
int main() {
    std::cout << movingCount(5,5,10) << std::endl;
    return 0;
}