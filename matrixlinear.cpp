#include<iostream>
using namespace std;
bool linearsearch(int mat[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int getmaxsum(int mat[][3] ,int rows,int cols){
   int maxrowsum = INT16_MIN;
   for(int i=0;i<rows;i++){
      int rowsum =0;
      for(int j=0;j<cols;j++){
        rowsum+= mat[i][j];
      }
      maxrowsum = max(maxrowsum,rowsum);
   }
   return maxrowsum;


}

int main(){
int mat[4][3] = {{1,2,33},{4,5,6},{7,8,9}};
int rows =3;
int cols=3;

cout<<getmaxsum(mat,rows,cols)<<endl;

return 0;
}