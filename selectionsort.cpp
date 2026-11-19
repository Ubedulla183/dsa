#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx =j;
            }
        }    
        swap(arr[i],arr[smallestidx]);
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

    selectionsort(arr,n);
    cout<<"sorted array : ";
    printarray(arr,n);
    return 0;
}
