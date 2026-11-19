#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int cur =i;
        int prev =i-1;
    while(prev>=0 && arr[prev]>cur)
    {
        arr[prev+1]=arr[prev];
        prev--;
    }

    arr[prev+1]= cur;
       
    }
}
void printarray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

int main(){
    int n=10;
    int arr[]={4,5,7,2,8,9,2,4,1,6};

    insertionsort(arr,n);
    cout<<"sorted array : ";
    printarray(arr,n);
    return 0;
}