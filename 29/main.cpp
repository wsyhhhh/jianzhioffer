#include <iostream>
#include <vector>
using namespace std;

vector<int> printMatrix(vector<vector<int> > matrix) {
    vector<int> result;
    if(matrix.empty())
        return result;
    int rows=matrix.size();
    int cols=matrix[0].size();
    int start=0;
    while(rows>start*2&&cols>start*2){
        int endx=cols-start-1;
        int endy=rows-start-1;
        for(int i=start;i<cols-start;i++)
            result.push_back(matrix[start][i]);
        if(start<endy)
            for(int j=start+1;j<=endy;j++)
                result.push_back(matrix[j][endx]);
        if(start<endy&&start<endx)
            for(int m=endx-1;m>=start;m--)
                result.push_back(matrix[endy][m]);
        if(start<endx&&start<endy-1)
            for(int n=endy-1;n>start;n--){
                result.push_back(matrix[n][start]);
            }

        start++;
    }
    return result;
}
int main() {
    vector<int> a1;
    a1.push_back(1);
    a1.push_back(2);
    a1.push_back(3);
    a1.push_back(4);
    vector<int> a2;
    a2.push_back(5);
    a2.push_back(6);
    a2.push_back(7);
    a2.push_back(8);
    vector<int> a3;
    a3.push_back(9);
    a3.push_back(10);
    a3.push_back(11);
    a3.push_back(12);
    vector<int> a4;
    a4.push_back(13);
    a4.push_back(14);
    a4.push_back(15);
    a4.push_back(16);
    vector<vector<int>> b;
    b.push_back(a1);
    b.push_back(a2);
    b.push_back(a3);
    b.push_back(a4);
    vector<int> c=printMatrix(b);
    vector<int>::iterator iter;
    for(iter=c.begin();iter!=c.end();iter++)
        cout<<*iter<<" ";
    cout<<endl;
    return 0;
}