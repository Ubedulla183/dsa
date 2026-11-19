#include<iostream>
using namespace std;

int main(){
int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int rows =4;
int cols=3;
//mat[2][1]=18;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>mat[i][j];
    }
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
       cout<<mat[i][j]<<" ";
    }
    cout<<endl;

}
cout<<endl;

//cout<<mat[2][1]<<endl;
return 0;
}