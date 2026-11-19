#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int> &A,int N,int C,int minalloweddist){
    int cows=1,laststallpos =A[0];

    for(int i=0;i<N;i++){
        if(A[i]-laststallpos>=minalloweddist){
            cows++;
            laststallpos =A[i];
        }
        if(cows == C){
            return true;
        }
    }
}
int getdistance(vector<int> &A,int N,int C){
    sort (A.begin(),A.end());

    int st=1,end=A[N-1]-A[0],ans=-1;

    while(st<=end){
        int mid= st+(end-st)/2;

        if(ispossible(A,N,C,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int N =5,C=3;
    vector<int> A={1,2,8,4,5};

    cout<<getdistance(A,N,C)<<endl;
    return 0;
}