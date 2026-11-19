#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &A,int n,int m,int maxallowedpages){
    int student =1,pages=0;

    for(int i=0;i<n;i++){
        if(A[i]>maxallowedpages){
            return false;
        }
        if(pages+A[i]<=maxallowedpages){
            pages += A[i];
        }else{
            student++;
            pages+A[i];
        }
    }
    return student >m ?false:true;
}
int allocatebooks(vector<int> &A,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum += A[i];

    }
    int ans=-1;
    int st=0,end=sum;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(A,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
        return ans;
    }
}
int main() 
{

    vector<int> A={2,5,3,4,6};
    int n=5,m=5;

    cout<<allocatebooks(A,n,m)<<endl;
    return 0;
}
