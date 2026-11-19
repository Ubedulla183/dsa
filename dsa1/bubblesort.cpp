#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       bool isswap =false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap =true;
            }
        }
        if(!isswap){
            return;
        }
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

    bubblesort(arr,n);
    cout<<"sorted array : ";
    printarray(arr,n);
    return 0;
}