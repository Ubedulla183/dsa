#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int max_sum= INT16_MIN;
     for(int st=0;st<n;st++){
        int cur_sum=0;
        for(int end=st;end<n;end++)
         {
            cur_sum += arr[end];
            max_sum = max(max_sum,cur_sum);    
                }
     }
     cout<<"max subarraay sum ="<<max_sum<<endl;
     return 0;
      

}