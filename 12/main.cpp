#include <iostream>
#include <cstring>
using namespace std;
bool hasPathCore(char* matrix,int rows,int cols,int row,int col,char* str,int &pathlen,bool* visited){
    if(str[pathlen]== '\0')
        return true;
    bool haspath= false;
    if(row>=0&&row<rows&&col>=0&&col<cols&&matrix[row*cols+col]==str[pathlen]&&!visited[row*rows+col])
    {
        pathlen++;
        visited[row*cols+col]=true;
        haspath=hasPathCore(matrix,rows,cols,row-1,col,str,pathlen,visited)||
                hasPathCore(matrix,rows,cols,row+1,col,str,pathlen,visited)||
                hasPathCore(matrix,rows,cols,row,col-1,str,pathlen,visited)||
                hasPathCore(matrix,rows,cols,row,col+1,str,pathlen,visited);
        if(!haspath){
            pathlen--;
            visited[row*cols+col]=false;
        }
    }
    return haspath;
}
bool hasPath(char* matrix, int rows, int cols, char* str)
{
    if(matrix== nullptr||rows<1||cols<1||str== nullptr)
        return false;
    bool* visited=new bool[rows*cols];
    memset(visited,0,rows*cols);
    int pathlen=0;
    for(int row=0;row<rows;row++)
        for(int col=0;col<cols;col++)
            if(hasPathCore(matrix,rows,cols,row,col,str,pathlen,visited))
                return true;
    delete[] visited;
    return false;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}