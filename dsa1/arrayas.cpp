#include<iostream>
using namespace std;
int main(){
    int nums[]={5,15,7,-9,78};
    int size=5;
    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for(int i=0;i<size;i++)
    {
        if(nums[i]<smallest)
        {
            smallest=nums[i];
        }
        largest = max(nums[i],largest);
    }
    
    cout<<"largest="<<largest<<endl;
    cout<<"Smallest="<<smallest<<endl;
    return 0;
}