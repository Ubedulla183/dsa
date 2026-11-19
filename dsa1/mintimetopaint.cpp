#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int> &A,int n,int m,int maxallowedtime){
    int painters=1,time=0;

    for(int i=0;i<n;i++){
        if(time+A[i]<=maxallowedtime){
            time += A[i];
        }else{
            painters++;
            time= A[i];
        }
    }
    return painters <=m;
}

int mintimetopaint(vector<int> &A,int n,int m){
    int sum=0,maxval=INT8_MAX;
    for(int i=0;i<n;i++){
        sum+= A[i];
        maxval = max(maxval,A[i]);
    }
    int st=maxval,end=sum,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(ispossible(A,n,m,mid)){
           ans =mid;
           end = mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> A={40,30,20};
    int n=4,m=2;

    cout<<mintimetopaint(A,n,m)<<endl;
    return 0;
}